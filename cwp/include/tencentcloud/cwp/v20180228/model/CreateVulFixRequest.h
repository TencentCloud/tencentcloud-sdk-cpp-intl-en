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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixTaskQuuids.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateVulFix request structure.
                */
                class CreateVulFixRequest : public AbstractModel
                {
                public:
                    CreateVulFixRequest();
                    ~CreateVulFixRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of hosts for which the vulnerability should be fixed
                     * @return CreateVulFixTaskQuuids List of hosts for which the vulnerability should be fixed
                     * 
                     */
                    std::vector<CreateVulFixTaskQuuids> GetCreateVulFixTaskQuuids() const;

                    /**
                     * 设置List of hosts for which the vulnerability should be fixed
                     * @param _createVulFixTaskQuuids List of hosts for which the vulnerability should be fixed
                     * 
                     */
                    void SetCreateVulFixTaskQuuids(const std::vector<CreateVulFixTaskQuuids>& _createVulFixTaskQuuids);

                    /**
                     * 判断参数 CreateVulFixTaskQuuids 是否已赋值
                     * @return CreateVulFixTaskQuuids 是否已赋值
                     * 
                     */
                    bool CreateVulFixTaskQuuidsHasBeenSet() const;

                    /**
                     * 获取Snapshot retention days: 0 days indicates that no snapshot will be created. Hosts without a snapshot for 24 hours must have a snapshot created to be restored.
                     * @return SaveDays Snapshot retention days: 0 days indicates that no snapshot will be created. Hosts without a snapshot for 24 hours must have a snapshot created to be restored.
                     * 
                     */
                    uint64_t GetSaveDays() const;

                    /**
                     * 设置Snapshot retention days: 0 days indicates that no snapshot will be created. Hosts without a snapshot for 24 hours must have a snapshot created to be restored.
                     * @param _saveDays Snapshot retention days: 0 days indicates that no snapshot will be created. Hosts without a snapshot for 24 hours must have a snapshot created to be restored.
                     * 
                     */
                    void SetSaveDays(const uint64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取Snapshot name
                     * @return SnapshotName Snapshot name
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
                     * @param _snapshotName Snapshot name
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * List of hosts for which the vulnerability should be fixed
                     */
                    std::vector<CreateVulFixTaskQuuids> m_createVulFixTaskQuuids;
                    bool m_createVulFixTaskQuuidsHasBeenSet;

                    /**
                     * Snapshot retention days: 0 days indicates that no snapshot will be created. Hosts without a snapshot for 24 hours must have a snapshot created to be restored.
                     */
                    uint64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * Snapshot name
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEVULFIXREQUEST_H_
