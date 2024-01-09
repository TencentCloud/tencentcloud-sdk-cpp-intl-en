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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Forcibly Modifying Tags
                */
                class ModifyResourceTags : public AbstractModel
                {
                public:
                    ModifyResourceTags();
                    ~ModifyResourceTags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID or CVM ID
                     * @return ResourceId Cluster ID or CVM ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Cluster ID or CVM ID
                     * @param _resourceId Cluster ID or CVM ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取6-segment resource expression
                     * @return Resource 6-segment resource expression
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置6-segment resource expression
                     * @param _resource 6-segment resource expression
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Resource prefix
                     * @return ResourcePrefix Resource prefix
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix
                     * @param _resourcePrefix Resource prefix
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取ap-beijing
                     * @return ResourceRegion ap-beijing
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置ap-beijing
                     * @param _resourceRegion ap-beijing
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取emr
                     * @return ServiceType emr
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置emr
                     * @param _serviceType emr
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取List of deleted tags
                     * @return DeleteTags List of deleted tags
                     * 
                     */
                    std::vector<Tag> GetDeleteTags() const;

                    /**
                     * 设置List of deleted tags
                     * @param _deleteTags List of deleted tags
                     * 
                     */
                    void SetDeleteTags(const std::vector<Tag>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                    /**
                     * 获取List of added tags
                     * @return AddTags List of added tags
                     * 
                     */
                    std::vector<Tag> GetAddTags() const;

                    /**
                     * 设置List of added tags
                     * @param _addTags List of added tags
                     * 
                     */
                    void SetAddTags(const std::vector<Tag>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取List of modified tags
                     * @return ModifyTags List of modified tags
                     * 
                     */
                    std::vector<Tag> GetModifyTags() const;

                    /**
                     * 设置List of modified tags
                     * @param _modifyTags List of modified tags
                     * 
                     */
                    void SetModifyTags(const std::vector<Tag>& _modifyTags);

                    /**
                     * 判断参数 ModifyTags 是否已赋值
                     * @return ModifyTags 是否已赋值
                     * 
                     */
                    bool ModifyTagsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID or CVM ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 6-segment resource expression
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Resource prefix
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * ap-beijing
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * emr
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * List of deleted tags
                     */
                    std::vector<Tag> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * List of added tags
                     */
                    std::vector<Tag> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * List of modified tags
                     */
                    std::vector<Tag> m_modifyTags;
                    bool m_modifyTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCETAGS_H_
