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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Storage.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeAuditTrack response structure.
                */
                class DescribeAuditTrackResponse : public AbstractModel
                {
                public:
                    DescribeAuditTrackResponse();
                    ~DescribeAuditTrackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Tracking set name
                     * @return Name Tracking set name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     * @return ActionType Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取The product to which the tracking set event belongs, such as `cos`, or `*` that indicates all products
                     * @return ResourceType The product to which the tracking set event belongs, such as `cos`, or `*` that indicates all products
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Tracking set status (0: Not enabled; 1: Enabled)
                     * @return Status Tracking set status (0: Not enabled; 1: Enabled)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The list of API names of tracking set events (`*`: All)
                     * @return EventNames The list of API names of tracking set events (`*`: All)
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 判断参数 EventNames 是否已赋值
                     * @return EventNames 是否已赋值
                     * 
                     */
                    bool EventNamesHasBeenSet() const;

                    /**
                     * 获取Storage type of shipped data. Valid values: `cos`, `cls`.
                     * @return Storage Storage type of shipped data. Valid values: `cos`, `cls`.
                     * 
                     */
                    Storage GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Creation time of the tracking set
                     * @return CreateTime Creation time of the tracking set
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrackForAllMembers Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTrackForAllMembers() const;

                    /**
                     * 判断参数 TrackForAllMembers 是否已赋值
                     * @return TrackForAllMembers 是否已赋值
                     * 
                     */
                    bool TrackForAllMembersHasBeenSet() const;

                private:

                    /**
                     * Tracking set name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * The product to which the tracking set event belongs, such as `cos`, or `*` that indicates all products
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Tracking set status (0: Not enabled; 1: Enabled)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The list of API names of tracking set events (`*`: All)
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * Storage type of shipped data. Valid values: `cos`, `cls`.
                     */
                    Storage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Creation time of the tracking set
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_
