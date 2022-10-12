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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyInstanceToken request structure.
                */
                class ModifyInstanceTokenRequest : public AbstractModel
                {
                public:
                    ModifyInstanceTokenRequest();
                    ~ModifyInstanceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the long-term access credential of the instance
                     * @return TokenId ID of the long-term access credential of the instance
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置ID of the long-term access credential of the instance
                     * @param TokenId ID of the long-term access credential of the instance
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param RegistryId Instance ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the long-term access credential of the instance
                     * @return Enable Whether to enable the long-term access credential of the instance
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable the long-term access credential of the instance
                     * @param Enable Whether to enable the long-term access credential of the instance
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Access credential description
                     * @return Desc Access credential description
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Access credential description
                     * @param Desc Access credential description
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Valid values: 1: Modify the description; 2: Enable/Disable. Default value: 2.
                     * @return ModifyFlag Valid values: 1: Modify the description; 2: Enable/Disable. Default value: 2.
                     */
                    int64_t GetModifyFlag() const;

                    /**
                     * 设置Valid values: 1: Modify the description; 2: Enable/Disable. Default value: 2.
                     * @param ModifyFlag Valid values: 1: Modify the description; 2: Enable/Disable. Default value: 2.
                     */
                    void SetModifyFlag(const int64_t& _modifyFlag);

                    /**
                     * 判断参数 ModifyFlag 是否已赋值
                     * @return ModifyFlag 是否已赋值
                     */
                    bool ModifyFlagHasBeenSet() const;

                private:

                    /**
                     * ID of the long-term access credential of the instance
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Whether to enable the long-term access credential of the instance
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Access credential description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Valid values: 1: Modify the description; 2: Enable/Disable. Default value: 2.
                     */
                    int64_t m_modifyFlag;
                    bool m_modifyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYINSTANCETOKENREQUEST_H_
