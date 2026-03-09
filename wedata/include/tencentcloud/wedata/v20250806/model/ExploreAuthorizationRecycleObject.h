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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>
#include <tencentcloud/wedata/v20250806/model/ExploreAuthorizeSubject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data exploration file recycling policy.
                */
                class ExploreAuthorizationRecycleObject : public AbstractModel
                {
                public:
                    ExploreAuthorizationRecycleObject();
                    ~ExploreAuthorizationRecycleObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resource File resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置File resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resource File resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResource(const ExploreFileResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Authorization details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecycleSubjects Authorization details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ExploreAuthorizeSubject> GetRecycleSubjects() const;

                    /**
                     * 设置Authorization details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recycleSubjects Authorization details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecycleSubjects(const std::vector<ExploreAuthorizeSubject>& _recycleSubjects);

                    /**
                     * 判断参数 RecycleSubjects 是否已赋值
                     * @return RecycleSubjects 是否已赋值
                     * 
                     */
                    bool RecycleSubjectsHasBeenSet() const;

                private:

                    /**
                     * File resource information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Authorization details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ExploreAuthorizeSubject> m_recycleSubjects;
                    bool m_recycleSubjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREAUTHORIZATIONRECYCLEOBJECT_H_
