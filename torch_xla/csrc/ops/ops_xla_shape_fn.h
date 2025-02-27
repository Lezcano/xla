#include "torch_xla/csrc/ir.h"
#include "torch_xla/csrc/ops/infer_output_shape.h"

namespace torch_xla {

xla::Shape AbsOutputShape(const torch::lazy::Value& input);

xla::Shape AcosOutputShape(const torch::lazy::Value& input);

xla::Shape AcoshOutputShape(const torch::lazy::Value& input);

xla::Shape AdaptiveAvgPool2dOutputShape(const torch::lazy::Value& input,
                                        absl::Span<const int64_t> output_size);

xla::Shape AdaptiveAvgPool2dBackwardOutputShape(
    const torch::lazy::Value& grad_output, const torch::lazy::Value& input);

xla::Shape AdaptiveAvgPool3dOutputShape(const torch::lazy::Value& input,
                                        absl::Span<const int64_t> output_size);

xla::Shape AdaptiveAvgPool3dBackwardOutputShape(
    const torch::lazy::Value& grad_output, const torch::lazy::Value& input);

xla::Shape AmaxOutputShape(const torch::lazy::Value& input,
                           absl::Span<const int64_t> dim, bool keepdim);

xla::Shape AminOutputShape(const torch::lazy::Value& input,
                           absl::Span<const int64_t> dim, bool keepdim);

xla::Shape AllOutputShape(const torch::lazy::Value& input);

xla::Shape AddcdivOutputShape(const torch::lazy::Value& input,
                              const torch::lazy::Value& t1,
                              const torch::lazy::Value& t2,
                              const torch::lazy::Value& value);

xla::Shape AddcmulOutputShape(const torch::lazy::Value& input,
                              const torch::lazy::Value& t1,
                              const torch::lazy::Value& t2,
                              const torch::lazy::Value& value);

xla::Shape AllDimOutputShape(const torch::lazy::Value& input, const int64_t dim,
                             const bool keepdim);

xla::Shape AsinOutputShape(const torch::lazy::Value& input);

xla::Shape AsinhOutputShape(const torch::lazy::Value& input);

xla::Shape AtanOutputShape(const torch::lazy::Value& input);

xla::Shape AtanhOutputShape(const torch::lazy::Value& input);

xla::Shape BinaryCrossEntropyOutputShape(
    const torch::lazy::Value& input, const torch::lazy::Value& target,
    const c10::optional<torch::lazy::Value>& weight, int64_t reduction);

xla::Shape BinaryCrossEntropyBackwardOutputShape(
    const torch::lazy::Value& grad_output, const torch::lazy::Value& input,
    const torch::lazy::Value& target,
    const c10::optional<torch::lazy::Value>& weight, int64_t reduction);

xla::Shape CeilOutputShape(const torch::lazy::Value& input);

xla::Shape ClampTensorOutputShape(const torch::lazy::Value& input,
                                  const c10::optional<torch::lazy::Value>& min,
                                  const c10::optional<torch::lazy::Value>& max);

xla::Shape ClampMaxTensorOutputShape(const torch::lazy::Value& input,
                                     const torch::lazy::Value& target);

xla::Shape ClampMinTensorOutputShape(const torch::lazy::Value& input,
                                     const torch::lazy::Value& target);

xla::Shape CosOutputShape(const torch::lazy::Value& input);

xla::Shape CoshOutputShape(const torch::lazy::Value& input);

xla::Shape EluOutputShape(const torch::lazy::Value& input,
                          const torch::lazy::Value& alpha,
                          const torch::lazy::Value& scale,
                          const torch::lazy::Value& input_scale);

xla::Shape ErfOutputShape(const torch::lazy::Value& input);

xla::Shape ErfcOutputShape(const torch::lazy::Value& input);

xla::Shape ErfinvOutputShape(const torch::lazy::Value& input);

xla::Shape ExpOutputShape(const torch::lazy::Value& input);

xla::Shape Expm1OutputShape(const torch::lazy::Value& input);

xla::Shape FloorOutputShape(const torch::lazy::Value& input);

xla::Shape GeScalarOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape GeTensorOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape GtScalarOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape GtTensorOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape HardsigmoidOutputShape(const torch::lazy::Value& input);

xla::Shape HardsigmoidBackwardOutputShape(const torch::lazy::Value& grad_output,
                                          const torch::lazy::Value& input);

xla::Shape HardswishOutputShape(const torch::lazy::Value& input);

xla::Shape HardswishBackwardOutputShape(const torch::lazy::Value& grad_output,
                                        const torch::lazy::Value& input);

xla::Shape InverseOutputShape(const torch::lazy::Value& input);

xla::Shape IsnanOutputShape(const torch::lazy::Value& input);

xla::Shape LeScalarOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape LeTensorOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape LtScalarOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape LtTensorOutputShape(const torch::lazy::Value& self,
                               const torch::lazy::Value& other);

xla::Shape LogdetOutputShape(const torch::lazy::Value& input);

xla::Shape LogicalAndOutputShape(const torch::lazy::Value& input,
                                 const torch::lazy::Value& other);

xla::Shape LogicalNotOutputShape(const torch::lazy::Value& input);

xla::Shape LogicalOrOutputShape(const torch::lazy::Value& input,
                                const torch::lazy::Value& other);

xla::Shape LogicalXorOutputShape(const torch::lazy::Value& input,
                                 const torch::lazy::Value& other);

xla::Shape LogSigmoidForwardOutputShape(const torch::lazy::Value& input);

xla::Shape LogSigmoidBackwardOutputShape(const torch::lazy::Value& grad_output,
                                         const torch::lazy::Value& input,
                                         const torch::lazy::Value& buffer);

xla::Shape MaximumOutputShape(const torch::lazy::Value& input,
                              const torch::lazy::Value& other);

xla::Shape MinimumOutputShape(const torch::lazy::Value& input,
                              const torch::lazy::Value& other);

xla::Shape ReciprocalOutputShape(const torch::lazy::Value& input);

xla::Shape ReluOutputShape(const torch::lazy::Value& input);

xla::Shape RoundOutputShape(const torch::lazy::Value& input);

xla::Shape RsqrtOutputShape(const torch::lazy::Value& input);

xla::Shape SeluOutputShape(const torch::lazy::Value& input);

xla::Shape SgnOutputShape(const torch::lazy::Value& input);

xla::Shape SignOutputShape(const torch::lazy::Value& input);

xla::Shape SiluOutputShape(const torch::lazy::Value& input);

xla::Shape SiluBackwardOutputShape(const torch::lazy::Value& grad_output,
                                   const torch::lazy::Value& input);

xla::Shape SinOutputShape(const torch::lazy::Value& input);

xla::Shape SinhOutputShape(const torch::lazy::Value& input);

/* Blocked on https://github.com/pytorch/xla/issues/3596 */
// xla::Shape SlogdetOutputShape(const torch::lazy::Value& input);

xla::Shape TanOutputShape(const torch::lazy::Value& input);

xla::Shape TanhOutputShape(const torch::lazy::Value& input);

xla::Shape TrilOutputShape(const torch::lazy::Value& input);

xla::Shape TriuOutputShape(const torch::lazy::Value& input);

xla::Shape TruncOutputShape(const torch::lazy::Value& input);

}  // namespace torch_xla
