#ifndef _ST_HPC_PPL_NN_PARAMS_PMX_VISION_EMBEDDING_PARAM_H_
#define _ST_HPC_PPL_NN_PARAMS_PMX_VISION_EMBEDDING_PARAM_H_

#include "ppl/nn/ir/attr.h"
#include <stdint.h>
#include <cmath>

namespace ppl { namespace nn { namespace opmx {

struct VisionEmbeddingParam final : public ir::TypedAttr<VisionEmbeddingParam> {
    int32_t hidden_dim;
    int32_t patch_size;

    bool operator==(const VisionEmbeddingParam& p) const {
        return (hidden_dim == p.hidden_dim
             && patch_size == p.patch_size);
    }
};

}}} // namespace ppl::nn::opmx

#endif
