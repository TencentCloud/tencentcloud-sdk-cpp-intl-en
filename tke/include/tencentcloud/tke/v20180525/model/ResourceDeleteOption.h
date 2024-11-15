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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * The policy to deal with resources in the cluster when the cluster is deleted.
                */
                class ResourceDeleteOption : public AbstractModel
                {
                public:
                    ResourceDeleteOption();
                    ~ResourceDeleteOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type, such as CBS, CLB, CVM
                     * @return ResourceType Resource type, such as CBS, CLB, CVM
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type, such as CBS, CLB, CVM
                     * @param _resourceType Resource type, such as CBS, CLB, CVM
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Deletion mode for CBS resources when the cluster is deleted: terminate, retain. Other resources are terminated by default.
                     * @return DeleteMode Deletion mode for CBS resources when the cluster is deleted: terminate, retain. Other resources are terminated by default.
                     * 
                     */
                    std::string GetDeleteMode() const;

                    /**
                     * 设置Deletion mode for CBS resources when the cluster is deleted: terminate, retain. Other resources are terminated by default.
                     * @param _deleteMode Deletion mode for CBS resources when the cluster is deleted: terminate, retain. Other resources are terminated by default.
                     * 
                     */
                    void SetDeleteMode(const std::string& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                    /**
                     * 获取Whether to skip the resources with deletion protection enabled. It is false by default. When set to true, the resources with deletion protection enabled are not cleaned up. CLB with terminal nodes also belongs to the resources with deletion protection enabled.
                     * @return SkipDeletionProtection Whether to skip the resources with deletion protection enabled. It is false by default. When set to true, the resources with deletion protection enabled are not cleaned up. CLB with terminal nodes also belongs to the resources with deletion protection enabled.
                     * 
                     */
                    bool GetSkipDeletionProtection() const;

                    /**
                     * 设置Whether to skip the resources with deletion protection enabled. It is false by default. When set to true, the resources with deletion protection enabled are not cleaned up. CLB with terminal nodes also belongs to the resources with deletion protection enabled.
                     * @param _skipDeletionProtection Whether to skip the resources with deletion protection enabled. It is false by default. When set to true, the resources with deletion protection enabled are not cleaned up. CLB with terminal nodes also belongs to the resources with deletion protection enabled.
                     * 
                     */
                    void SetSkipDeletionProtection(const bool& _skipDeletionProtection);

                    /**
                     * 判断参数 SkipDeletionProtection 是否已赋值
                     * @return SkipDeletionProtection 是否已赋值
                     * 
                     */
                    bool SkipDeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Resource type, such as CBS, CLB, CVM
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Deletion mode for CBS resources when the cluster is deleted: terminate, retain. Other resources are terminated by default.
                     */
                    std::string m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                    /**
                     * Whether to skip the resources with deletion protection enabled. It is false by default. When set to true, the resources with deletion protection enabled are not cleaned up. CLB with terminal nodes also belongs to the resources with deletion protection enabled.
                     */
                    bool m_skipDeletionProtection;
                    bool m_skipDeletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESOURCEDELETEOPTION_H_
