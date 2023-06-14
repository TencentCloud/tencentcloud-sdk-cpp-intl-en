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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYAUDITTRACKREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYAUDITTRACKREQUEST_H_

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
                * ModifyAuditTrack request structure.
                */
                class ModifyAuditTrackRequest : public AbstractModel
                {
                public:
                    ModifyAuditTrackRequest();
                    ~ModifyAuditTrackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tracking set ID
                     * @return TrackId Tracking set ID
                     * 
                     */
                    uint64_t GetTrackId() const;

                    /**
                     * 设置Tracking set ID
                     * @param _trackId Tracking set ID
                     * 
                     */
                    void SetTrackId(const uint64_t& _trackId);

                    /**
                     * 判断参数 TrackId 是否已赋值
                     * @return TrackId 是否已赋值
                     * 
                     */
                    bool TrackIdHasBeenSet() const;

                    /**
                     * 获取Tracking set name, which can only contain 3-48 letters, digits, hyphens, and underscores.
                     * @return Name Tracking set name, which can only contain 3-48 letters, digits, hyphens, and underscores.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tracking set name, which can only contain 3-48 letters, digits, hyphens, and underscores.
                     * @param _name Tracking set name, which can only contain 3-48 letters, digits, hyphens, and underscores.
                     * 
                     */
                    void SetName(const std::string& _name);

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
                     * 设置Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     * @param _actionType Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取The product to which the tracking set event belongs. The value can be a single product such as `cos`, or `*` that indicates all products.
                     * @return ResourceType The product to which the tracking set event belongs. The value can be a single product such as `cos`, or `*` that indicates all products.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The product to which the tracking set event belongs. The value can be a single product such as `cos`, or `*` that indicates all products.
                     * @param _resourceType The product to which the tracking set event belongs. The value can be a single product such as `cos`, or `*` that indicates all products.
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
                     * 获取Tracking set status (0: Not enabled; 1: Enabled)
                     * @return Status Tracking set status (0: Not enabled; 1: Enabled)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Tracking set status (0: Not enabled; 1: Enabled)
                     * @param _status Tracking set status (0: Not enabled; 1: Enabled)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The list of API names of tracking set events. When `ResourceType` is `*`, the value of `EventNames` must be `*`. When `ResourceType` is a specified product, the value of `EventNames` can be `*`. When `ResourceType` is `cos` or `cls`, up to 10 APIs are supported.
                     * @return EventNames The list of API names of tracking set events. When `ResourceType` is `*`, the value of `EventNames` must be `*`. When `ResourceType` is a specified product, the value of `EventNames` can be `*`. When `ResourceType` is `cos` or `cls`, up to 10 APIs are supported.
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 设置The list of API names of tracking set events. When `ResourceType` is `*`, the value of `EventNames` must be `*`. When `ResourceType` is a specified product, the value of `EventNames` can be `*`. When `ResourceType` is `cos` or `cls`, up to 10 APIs are supported.
                     * @param _eventNames The list of API names of tracking set events. When `ResourceType` is `*`, the value of `EventNames` must be `*`. When `ResourceType` is a specified product, the value of `EventNames` can be `*`. When `ResourceType` is `cos` or `cls`, up to 10 APIs are supported.
                     * 
                     */
                    void SetEventNames(const std::vector<std::string>& _eventNames);

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
                     * 设置Storage type of shipped data. Valid values: `cos`, `cls`.
                     * @param _storage Storage type of shipped data. Valid values: `cos`, `cls`.
                     * 
                     */
                    void SetStorage(const Storage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account (0: Not enabled; 1: Enabled. This feature can only be enabled by the organization admin account or the trusted service admin account)
                     * @return TrackForAllMembers Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account (0: Not enabled; 1: Enabled. This feature can only be enabled by the organization admin account or the trusted service admin account)
                     * 
                     */
                    uint64_t GetTrackForAllMembers() const;

                    /**
                     * 设置Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account (0: Not enabled; 1: Enabled. This feature can only be enabled by the organization admin account or the trusted service admin account)
                     * @param _trackForAllMembers Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account (0: Not enabled; 1: Enabled. This feature can only be enabled by the organization admin account or the trusted service admin account)
                     * 
                     */
                    void SetTrackForAllMembers(const uint64_t& _trackForAllMembers);

                    /**
                     * 判断参数 TrackForAllMembers 是否已赋值
                     * @return TrackForAllMembers 是否已赋值
                     * 
                     */
                    bool TrackForAllMembersHasBeenSet() const;

                private:

                    /**
                     * Tracking set ID
                     */
                    uint64_t m_trackId;
                    bool m_trackIdHasBeenSet;

                    /**
                     * Tracking set name, which can only contain 3-48 letters, digits, hyphens, and underscores.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tracking set event type (`Read`: Read; `Write`: Write; `*`: All)
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * The product to which the tracking set event belongs. The value can be a single product such as `cos`, or `*` that indicates all products.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Tracking set status (0: Not enabled; 1: Enabled)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The list of API names of tracking set events. When `ResourceType` is `*`, the value of `EventNames` must be `*`. When `ResourceType` is a specified product, the value of `EventNames` can be `*`. When `ResourceType` is `cos` or `cls`, up to 10 APIs are supported.
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * Storage type of shipped data. Valid values: `cos`, `cls`.
                     */
                    Storage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Whether to enable the feature of shipping organization members’ operation logs to the organization admin account or the trusted service admin account (0: Not enabled; 1: Enabled. This feature can only be enabled by the organization admin account or the trusted service admin account)
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYAUDITTRACKREQUEST_H_
