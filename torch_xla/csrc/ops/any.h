#pragma once

#include <vector>

#include "tensorflow/compiler/xla/types.h"
#include "torch_xla/csrc/ir.h"

namespace torch_xla {

class Any : public XlaNode {
 public:
  Any(const torch::lazy::Value& input, std::vector<int64_t> dimensions,
      bool keep_reduced_dimensions);

  std::string ToString() const override;

  torch::lazy::NodePtr Clone(torch::lazy::OpList operands) const override;

  XlaOpVector Lower(LoweringContext* loctx) const override;

  const std::vector<int64_t>& dimensions() const { return dimensions_; }

  bool keep_reduced_dimensions() const { return keep_reduced_dimensions_; }

 private:
  std::vector<int64_t> dimensions_;
  bool keep_reduced_dimensions_;
};

}  // namespace torch_xla
