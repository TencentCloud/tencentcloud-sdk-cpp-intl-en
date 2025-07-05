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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Exclusive edition cluster.
                */
                class ExclusiveHSM : public AbstractModel
                {
                public:
                    ExclusiveHSM();
                    ~ExclusiveHSM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dedicated cluster Id.
                     * @return HsmClusterId Dedicated cluster Id.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置Dedicated cluster Id.
                     * @param _hsmClusterId Dedicated cluster Id.
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name.
                     * @return HsmClusterName Dedicated cluster name.
                     * 
                     */
                    std::string GetHsmClusterName() const;

                    /**
                     * 设置Dedicated cluster name.
                     * @param _hsmClusterName Dedicated cluster name.
                     * 
                     */
                    void SetHsmClusterName(const std::string& _hsmClusterName);

                    /**
                     * 判断参数 HsmClusterName 是否已赋值
                     * @return HsmClusterName 是否已赋值
                     * 
                     */
                    bool HsmClusterNameHasBeenSet() const;

                private:

                    /**
                     * Dedicated cluster Id.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * Dedicated cluster name.
                     */
                    std::string m_hsmClusterName;
                    bool m_hsmClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_EXCLUSIVEHSM_H_
