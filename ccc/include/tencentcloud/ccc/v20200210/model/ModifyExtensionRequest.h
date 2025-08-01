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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYEXTENSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYEXTENSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * ModifyExtension request structure.
                */
                class ModifyExtensionRequest : public AbstractModel
                {
                public:
                    ModifyExtensionRequest();
                    ~ModifyExtensionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Extension.
                     * @return ExtensionId Extension.
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置Extension.
                     * @param _extensionId Extension.
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取Extension name.
                     * @return ExtensionName Extension name.
                     * 
                     */
                    std::string GetExtensionName() const;

                    /**
                     * 设置Extension name.
                     * @param _extensionName Extension name.
                     * 
                     */
                    void SetExtensionName(const std::string& _extensionName);

                    /**
                     * 判断参数 ExtensionName 是否已赋值
                     * @return ExtensionName 是否已赋值
                     * 
                     */
                    bool ExtensionNameHasBeenSet() const;

                    /**
                     * 获取Affiliated skill group list.
                     * @return SkillGroupIds Affiliated skill group list.
                     * 
                     */
                    std::vector<int64_t> GetSkillGroupIds() const;

                    /**
                     * 设置Affiliated skill group list.
                     * @param _skillGroupIds Affiliated skill group list.
                     * 
                     */
                    void SetSkillGroupIds(const std::vector<int64_t>& _skillGroupIds);

                    /**
                     * 判断参数 SkillGroupIds 是否已赋值
                     * @return SkillGroupIds 是否已赋值
                     * 
                     */
                    bool SkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取Bind agent email account.
                     * @return Relation Bind agent email account.
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置Bind agent email account.
                     * @param _relation Bind agent email account.
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Extension.
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * Extension name.
                     */
                    std::string m_extensionName;
                    bool m_extensionNameHasBeenSet;

                    /**
                     * Affiliated skill group list.
                     */
                    std::vector<int64_t> m_skillGroupIds;
                    bool m_skillGroupIdsHasBeenSet;

                    /**
                     * Bind agent email account.
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYEXTENSIONREQUEST_H_
