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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEPRIVILEGEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEPRIVILEGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>
#include <tencentcloud/wedata/v20250806/model/SubjectInfo.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ResourcePrivilegeDetail
                */
                class ResourcePrivilegeDetail : public AbstractModel
                {
                public:
                    ResourcePrivilegeDetail();
                    ~ResourcePrivilegeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource.
                     * @return Resource Resource.
                     * 
                     */
                    PrivilegeResource GetResource() const;

                    /**
                     * 设置Resource.
                     * @param _resource Resource.
                     * 
                     */
                    void SetResource(const PrivilegeResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Subject.
                     * @return SubjectDetails Subject.
                     * 
                     */
                    std::vector<SubjectInfo> GetSubjectDetails() const;

                    /**
                     * 设置Subject.
                     * @param _subjectDetails Subject.
                     * 
                     */
                    void SetSubjectDetails(const std::vector<SubjectInfo>& _subjectDetails);

                    /**
                     * 判断参数 SubjectDetails 是否已赋值
                     * @return SubjectDetails 是否已赋值
                     * 
                     */
                    bool SubjectDetailsHasBeenSet() const;

                    /**
                     * 获取Permission details.
                     * @return PermissionDetails Permission details.
                     * 
                     */
                    std::vector<PrivilegeInfo> GetPermissionDetails() const;

                    /**
                     * 设置Permission details.
                     * @param _permissionDetails Permission details.
                     * 
                     */
                    void SetPermissionDetails(const std::vector<PrivilegeInfo>& _permissionDetails);

                    /**
                     * 判断参数 PermissionDetails 是否已赋值
                     * @return PermissionDetails 是否已赋值
                     * 
                     */
                    bool PermissionDetailsHasBeenSet() const;

                private:

                    /**
                     * Resource.
                     */
                    PrivilegeResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Subject.
                     */
                    std::vector<SubjectInfo> m_subjectDetails;
                    bool m_subjectDetailsHasBeenSet;

                    /**
                     * Permission details.
                     */
                    std::vector<PrivilegeInfo> m_permissionDetails;
                    bool m_permissionDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEPRIVILEGEDETAIL_H_
