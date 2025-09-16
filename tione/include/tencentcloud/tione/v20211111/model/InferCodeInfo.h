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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Inference code information.
                */
                class InferCodeInfo : public AbstractModel
                {
                public:
                    InferCodeInfo();
                    ~InferCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Details of Cloud Object Storage (COS) where the inference code is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosPathInfo Details of Cloud Object Storage (COS) where the inference code is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置Details of Cloud Object Storage (COS) where the inference code is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosPathInfo Details of Cloud Object Storage (COS) where the inference code is located.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosPathInfo(const CosPathInfo& _cosPathInfo);

                    /**
                     * 判断参数 CosPathInfo 是否已赋值
                     * @return CosPathInfo 是否已赋值
                     * 
                     */
                    bool CosPathInfoHasBeenSet() const;

                private:

                    /**
                     * Details of Cloud Object Storage (COS) where the inference code is located.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_
