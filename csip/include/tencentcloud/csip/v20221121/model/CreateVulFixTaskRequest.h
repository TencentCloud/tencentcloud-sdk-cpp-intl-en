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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateVulFixTask request structure.
                */
                class CreateVulFixTaskRequest : public AbstractModel
                {
                public:
                    CreateVulFixTaskRequest();
                    ~CreateVulFixTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Repair item list, each item specifies a vulnerability/KB patch and its hosts requiring fixing<br>Input parameter limit: No more than 100 items, total number of instances not more than 5000</p>
                     * @return FixItems <p>Repair item list, each item specifies a vulnerability/KB patch and its hosts requiring fixing<br>Input parameter limit: No more than 100 items, total number of instances not more than 5000</p>
                     * 
                     */
                    std::vector<VulFixItem> GetFixItems() const;

                    /**
                     * 设置<p>Repair item list, each item specifies a vulnerability/KB patch and its hosts requiring fixing<br>Input parameter limit: No more than 100 items, total number of instances not more than 5000</p>
                     * @param _fixItems <p>Repair item list, each item specifies a vulnerability/KB patch and its hosts requiring fixing<br>Input parameter limit: No more than 100 items, total number of instances not more than 5000</p>
                     * 
                     */
                    void SetFixItems(const std::vector<VulFixItem>& _fixItems);

                    /**
                     * 判断参数 FixItems 是否已赋值
                     * @return FixItems 是否已赋值
                     * 
                     */
                    bool FixItemsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum repair time<br>Measurement unit: second<br>Default value: 3600</p>
                     * @return Timeout <p>Maximum repair time<br>Measurement unit: second<br>Default value: 3600</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>Maximum repair time<br>Measurement unit: second<br>Default value: 3600</p>
                     * @param _timeout <p>Maximum repair time<br>Measurement unit: second<br>Default value: 3600</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Whether to create a disk snapshot before repair<br>Default value: false</p>
                     * @return CreateSnapshot <p>Whether to create a disk snapshot before repair<br>Default value: false</p>
                     * 
                     */
                    bool GetCreateSnapshot() const;

                    /**
                     * 设置<p>Whether to create a disk snapshot before repair<br>Default value: false</p>
                     * @param _createSnapshot <p>Whether to create a disk snapshot before repair<br>Default value: false</p>
                     * 
                     */
                    void SetCreateSnapshot(const bool& _createSnapshot);

                    /**
                     * 判断参数 CreateSnapshot 是否已赋值
                     * @return CreateSnapshot 是否已赋值
                     * 
                     */
                    bool CreateSnapshotHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot name. Valid when CreateSnapshot is true.<br>Input parameter limit: Up to 128 characters.</p>
                     * @return SnapshotName <p>Snapshot name. Valid when CreateSnapshot is true.<br>Input parameter limit: Up to 128 characters.</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>Snapshot name. Valid when CreateSnapshot is true.<br>Input parameter limit: Up to 128 characters.</p>
                     * @param _snapshotName <p>Snapshot name. Valid when CreateSnapshot is true.<br>Input parameter limit: Up to 128 characters.</p>
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot retention days. Valid when CreateSnapshot is true.</p>
                     * @return SaveDays <p>Snapshot retention days. Valid when CreateSnapshot is true.</p>
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 设置<p>Snapshot retention days. Valid when CreateSnapshot is true.</p>
                     * @param _saveDays <p>Snapshot retention days. Valid when CreateSnapshot is true.</p>
                     * 
                     */
                    void SetSaveDays(const int64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>Repair item list, each item specifies a vulnerability/KB patch and its hosts requiring fixing<br>Input parameter limit: No more than 100 items, total number of instances not more than 5000</p>
                     */
                    std::vector<VulFixItem> m_fixItems;
                    bool m_fixItemsHasBeenSet;

                    /**
                     * <p>Maximum repair time<br>Measurement unit: second<br>Default value: 3600</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Whether to create a disk snapshot before repair<br>Default value: false</p>
                     */
                    bool m_createSnapshot;
                    bool m_createSnapshotHasBeenSet;

                    /**
                     * <p>Snapshot name. Valid when CreateSnapshot is true.<br>Input parameter limit: Up to 128 characters.</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>Snapshot retention days. Valid when CreateSnapshot is true.</p>
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULFIXTASKREQUEST_H_
