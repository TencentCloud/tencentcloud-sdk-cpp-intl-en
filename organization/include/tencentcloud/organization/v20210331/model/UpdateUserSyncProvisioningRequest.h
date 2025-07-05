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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSYNCPROVISIONINGREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSYNCPROVISIONINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateUserSyncProvisioning request structure.
                */
                class UpdateUserSyncProvisioningRequest : public AbstractModel
                {
                public:
                    UpdateUserSyncProvisioningRequest();
                    ~UpdateUserSyncProvisioningRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID.
                     * @return ZoneId Space ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Space ID.
                     * @param _zoneId Space ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取User synchronization ID.
                     * @return UserProvisioningId User synchronization ID.
                     * 
                     */
                    std::string GetUserProvisioningId() const;

                    /**
                     * 设置User synchronization ID.
                     * @param _userProvisioningId User synchronization ID.
                     * 
                     */
                    void SetUserProvisioningId(const std::string& _userProvisioningId);

                    /**
                     * 判断参数 UserProvisioningId 是否已赋值
                     * @return UserProvisioningId 是否已赋值
                     * 
                     */
                    bool UserProvisioningIdHasBeenSet() const;

                    /**
                     * 获取User synchronization description.
                     * @return NewDescription User synchronization description.
                     * 
                     */
                    std::string GetNewDescription() const;

                    /**
                     * 设置User synchronization description.
                     * @param _newDescription User synchronization description.
                     * 
                     */
                    void SetNewDescription(const std::string& _newDescription);

                    /**
                     * 判断参数 NewDescription 是否已赋值
                     * @return NewDescription 是否已赋值
                     * 
                     */
                    bool NewDescriptionHasBeenSet() const;

                    /**
                     * 获取Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * @return NewDuplicationStateful Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * 
                     */
                    std::string GetNewDuplicationStateful() const;

                    /**
                     * 设置Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * @param _newDuplicationStateful Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     * 
                     */
                    void SetNewDuplicationStateful(const std::string& _newDuplicationStateful);

                    /**
                     * 判断参数 NewDuplicationStateful 是否已赋值
                     * @return NewDuplicationStateful 是否已赋值
                     * 
                     */
                    bool NewDuplicationStatefulHasBeenSet() const;

                    /**
                     * 获取Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * @return NewDeletionStrategy Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * 
                     */
                    std::string GetNewDeletionStrategy() const;

                    /**
                     * 设置Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * @param _newDeletionStrategy Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     * 
                     */
                    void SetNewDeletionStrategy(const std::string& _newDeletionStrategy);

                    /**
                     * 判断参数 NewDeletionStrategy 是否已赋值
                     * @return NewDeletionStrategy 是否已赋值
                     * 
                     */
                    bool NewDeletionStrategyHasBeenSet() const;

                private:

                    /**
                     * Space ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * User synchronization ID.
                     */
                    std::string m_userProvisioningId;
                    bool m_userProvisioningIdHasBeenSet;

                    /**
                     * User synchronization description.
                     */
                    std::string m_newDescription;
                    bool m_newDescriptionHasBeenSet;

                    /**
                     * Conflict policy. It indicates the handling policy for existence of a user with the same username when CIC users are synchronized to CAM. Valid values: KeepBoth: Keep both, that is, add the _cic suffix to the CIC user's username and then try to create a CAM user with the username when CIC users are synchronized to CAM and a user with the same username already exists in CAM; TakeOver: Replace, that is, directly replace the existing CAM user with the synchronized CIC user when CIC users are synchronized to CAM and a user with the same username already exists in CAM.
                     */
                    std::string m_newDuplicationStateful;
                    bool m_newDuplicationStatefulHasBeenSet;

                    /**
                     * Deletion policy. It indicates the handling policy for CAM users already synchronized when the CAM user synchronization is deleted. Valid values: Delete: Delete the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted; Keep: Keep the CAM users already synchronized from CIC to CAM when the CAM user synchronization is deleted.
                     */
                    std::string m_newDeletionStrategy;
                    bool m_newDeletionStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEUSERSYNCPROVISIONINGREQUEST_H_
