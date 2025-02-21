#include "torch_xla/csrc/ops/softshrink.h"

#include "torch_xla/csrc/elementwise.h"
#include "torch_xla/csrc/helpers.h"
#include "torch_xla/csrc/lowering_context.h"
#include "torch_xla/csrc/ops/scalar.h"

namespace torch_xla {

Softshrink::Softshrink(const torch::lazy::Value& input,
                       const at::Scalar& lambda)
    : XlaNode(torch::lazy::OpKind(at::aten::softshrink), {input},
              GetXlaShape(input),
              /*num_outputs=*/1, ScalarHash(lambda)),
      lambda_(std::move(lambda)) {}

std::string Softshrink::ToString() const {
  std::stringstream ss;
  ss << XlaNode::ToString() << ", lambda=" << lambda_;
  return ss.str();
}

torch::lazy::NodePtr Softshrink::Clone(torch::lazy::OpList operands) const {
  return torch::lazy::MakeNode<Softshrink>(operands.at(0), lambda_);
}

XlaOpVector Softshrink::Lower(LoweringContext* loctx) const {
  xla::XlaOp input = loctx->GetOutputOp(operand(0));
  return ReturnOp(BuildSoftshrink(input, lambda_), loctx);
}

}  // namespace torch_xla
