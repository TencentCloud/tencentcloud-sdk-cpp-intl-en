/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUBLICNETCONFIGIN_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUBLICNETCONFIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/EipConfigIn.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Public network access configuration
                */
                class PublicNetConfigIn : public AbstractModel
                {
                public:
                    PublicNetConfigIn();
                    ~PublicNetConfigIn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable public network access. Valid values: ['DISABLE', 'ENABLE']
                     * @return PublicNetStatus Whether to enable public network access. Valid values: ['DISABLE', 'ENABLE']
                     */
                    std::string GetPublicNetStatus() const;

                    /**
                     * 设置Whether to enable public network access. Valid values: ['DISABLE', 'ENABLE']
                     * @param PublicNetStatus Whether to enable public network access. Valid values: ['DISABLE', 'ENABLE']
                     */
                    void SetPublicNetStatus(const std::string& _publicNetStatus);

                    /**
                     * 判断参数 PublicNetStatus 是否已赋值
                     * @return PublicNetStatus 是否已赋值
                     */
                    bool PublicNetStatusHasBeenSet() const;

                    /**
                     * 获取EIP configuration
                     * @return EipConfig EIP configuration
                     */
                    EipConfigIn GetEipConfig() const;

                    /**
                     * 设置EIP configuration
                     * @param EipConfig EIP configuration
                     */
                    void SetEipConfig(const EipConfigIn& _eipConfig);

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     */
                    bool EipConfigHasBeenSet() const;

                private:

                    /**
                     * Whether to enable public network access. Valid values: ['DISABLE', 'ENABLE']
                     */
                    std::string m_publicNetStatus;
                    bool m_publicNetStatusHasBeenSet;

                    /**
                     * EIP configuration
                     */
                    EipConfigIn m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUBLICNETCONFIGIN_H_
