/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateReconstructDocumentFlow response structure.
                */
                class CreateReconstructDocumentFlowResponse : public AbstractModel
                {
                public:
                    CreateReconstructDocumentFlowResponse();
                    ~CreateReconstructDocumentFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique task ID. The processing result corresponding to TaskId can be queried through the API [GetReconstructDocumentResult](https://cloud.tencent.com/document/product/1759/107505) within 30 days.
                     * @return TaskId Unique task ID. The processing result corresponding to TaskId can be queried through the API [GetReconstructDocumentResult](https://cloud.tencent.com/document/product/1759/107505) within 30 days.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Unique task ID. The processing result corresponding to TaskId can be queried through the API [GetReconstructDocumentResult](https://cloud.tencent.com/document/product/1759/107505) within 30 days.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATERECONSTRUCTDOCUMENTFLOWRESPONSE_H_
