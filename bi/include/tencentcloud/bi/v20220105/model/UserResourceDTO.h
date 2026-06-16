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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERRESOURCEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERRESOURCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ResourceItem.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User resource input parameter
                */
                class UserResourceDTO : public AbstractModel
                {
                public:
                    UserResourceDTO();
                    ~UserResourceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CorpId Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _corpId Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Resource list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceList Resource list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceItem> GetResourceList() const;

                    /**
                     * 设置Resource list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceList Resource list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceList(const std::vector<ResourceItem>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                private:

                    /**
                     * Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Resource list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceItem> m_resourceList;
                    bool m_resourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERRESOURCEDTO_H_
