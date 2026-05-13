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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDisk.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ApplySnapshotGroup request structure.
                */
                class ApplySnapshotGroupRequest : public AbstractModel
                {
                public:
                    ApplySnapshotGroupRequest();
                    ~ApplySnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the snapshot group ID rolled back.
                     * @return SnapshotGroupId Specifies the snapshot group ID rolled back.
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置Specifies the snapshot group ID rolled back.
                     * @param _snapshotGroupId Specifies the snapshot group ID rolled back.
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取Specifies the snapshot ID associated with the rollback snapshot group and the original cloud disk ID list of the corresponding snapshot.
                     * @return ApplyDisks Specifies the snapshot ID associated with the rollback snapshot group and the original cloud disk ID list of the corresponding snapshot.
                     * 
                     */
                    std::vector<ApplyDisk> GetApplyDisks() const;

                    /**
                     * 设置Specifies the snapshot ID associated with the rollback snapshot group and the original cloud disk ID list of the corresponding snapshot.
                     * @param _applyDisks Specifies the snapshot ID associated with the rollback snapshot group and the original cloud disk ID list of the corresponding snapshot.
                     * 
                     */
                    void SetApplyDisks(const std::vector<ApplyDisk>& _applyDisks);

                    /**
                     * 判断参数 ApplyDisks 是否已赋值
                     * @return ApplyDisks 是否已赋值
                     * 
                     */
                    bool ApplyDisksHasBeenSet() const;

                    /**
                     * 获取Specifies whether to perform automatic shutdown before rollback.
                     * @return AutoStopInstance Specifies whether to perform automatic shutdown before rollback.
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置Specifies whether to perform automatic shutdown before rollback.
                     * @param _autoStopInstance Specifies whether to perform automatic shutdown before rollback.
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically start after completion.
                     * @return AutoStartInstance Specifies whether to automatically start after completion.
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置Specifies whether to automatically start after completion.
                     * @param _autoStartInstance Specifies whether to automatically start after completion.
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * Specifies the snapshot group ID rolled back.
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * Specifies the snapshot ID associated with the rollback snapshot group and the original cloud disk ID list of the corresponding snapshot.
                     */
                    std::vector<ApplyDisk> m_applyDisks;
                    bool m_applyDisksHasBeenSet;

                    /**
                     * Specifies whether to perform automatic shutdown before rollback.
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * Specifies whether to automatically start after completion.
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_
