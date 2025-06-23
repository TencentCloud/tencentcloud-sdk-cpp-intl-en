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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDLIST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployRecordItem.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Managed record detailed information.
                */
                class DeployRecordList : public AbstractModel
                {
                public:
                    DeployRecordList();
                    ~DeployRecordList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deployment resource type.
                     * @return ResourceType Deployment resource type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Deployment resource type.
                     * @param _resourceType Deployment resource type.
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
                     * 获取Deployment resource detail list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return List Deployment resource detail list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DeployRecordItem> GetList() const;

                    /**
                     * 设置Deployment resource detail list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _list Deployment resource detail list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<DeployRecordItem>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取Total count of deployment resources.
                     * @return TotalCount Total count of deployment resources.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total count of deployment resources.
                     * @param _totalCount Total count of deployment resources.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Deployment resource type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Deployment resource detail list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DeployRecordItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * Total count of deployment resources.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDLIST_H_
