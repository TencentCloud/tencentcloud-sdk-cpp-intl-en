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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/TkeMeta.h>
#include <tencentcloud/apm/v20210622/model/CVMMeta.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Resource layer information.
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Resource type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Resource type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Resource type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取TKE resource layer information.
                     * @return TKEMeta TKE resource layer information.
                     * 
                     */
                    std::vector<TkeMeta> GetTKEMeta() const;

                    /**
                     * 设置TKE resource layer information.
                     * @param _tKEMeta TKE resource layer information.
                     * 
                     */
                    void SetTKEMeta(const std::vector<TkeMeta>& _tKEMeta);

                    /**
                     * 判断参数 TKEMeta 是否已赋值
                     * @return TKEMeta 是否已赋值
                     * 
                     */
                    bool TKEMetaHasBeenSet() const;

                    /**
                     * 获取CVM resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVMMeta CVM resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CVMMeta> GetCVMMeta() const;

                    /**
                     * 设置CVM resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVMMeta CVM resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCVMMeta(const std::vector<CVMMeta>& _cVMMeta);

                    /**
                     * 判断参数 CVMMeta 是否已赋值
                     * @return CVMMeta 是否已赋值
                     * 
                     */
                    bool CVMMetaHasBeenSet() const;

                private:

                    /**
                     * Resource type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * TKE resource layer information.
                     */
                    std::vector<TkeMeta> m_tKEMeta;
                    bool m_tKEMetaHasBeenSet;

                    /**
                     * CVM resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CVMMeta> m_cVMMeta;
                    bool m_cVMMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_RESOURCE_H_
