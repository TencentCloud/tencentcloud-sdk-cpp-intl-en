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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Resource pack details
                */
                class PackageDetail : public AbstractModel
                {
                public:
                    PackageDetail();
                    ~PackageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account ID of `AppId` Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId Account ID of `AppId` Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Account ID of `AppId` Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId Account ID of `AppId` Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageId The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageId The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Instance ID Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The successfully deducted capacity Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuccessDeductSpec The successfully deducted capacity Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSuccessDeductSpec() const;

                    /**
                     * 设置The successfully deducted capacity Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _successDeductSpec The successfully deducted capacity Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuccessDeductSpec(const double& _successDeductSpec);

                    /**
                     * 判断参数 SuccessDeductSpec 是否已赋值
                     * @return SuccessDeductSpec 是否已赋值
                     * 
                     */
                    bool SuccessDeductSpecHasBeenSet() const;

                    /**
                     * 获取Used capacity of a resource pack as of now Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageTotalUsedSpec Used capacity of a resource pack as of now Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetPackageTotalUsedSpec() const;

                    /**
                     * 设置Used capacity of a resource pack as of now Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageTotalUsedSpec Used capacity of a resource pack as of now Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageTotalUsedSpec(const double& _packageTotalUsedSpec);

                    /**
                     * 判断参数 PackageTotalUsedSpec 是否已赋值
                     * @return PackageTotalUsedSpec 是否已赋值
                     * 
                     */
                    bool PackageTotalUsedSpecHasBeenSet() const;

                    /**
                     * 获取Deduction start time Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Deduction start time Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Deduction start time Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Deduction start time Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Deduction end time Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Deduction end time Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Deduction end time Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Deduction end time Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Extended information Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtendInfo Extended information Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtendInfo() const;

                    /**
                     * 设置Extended information Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extendInfo Extended information Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtendInfo(const std::string& _extendInfo);

                    /**
                     * 判断参数 ExtendInfo 是否已赋值
                     * @return ExtendInfo 是否已赋值
                     * 
                     */
                    bool ExtendInfoHasBeenSet() const;

                private:

                    /**
                     * Account ID of `AppId` Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * The unique ID of a resource pack Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Instance ID Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The successfully deducted capacity Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_successDeductSpec;
                    bool m_successDeductSpecHasBeenSet;

                    /**
                     * Used capacity of a resource pack as of now Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_packageTotalUsedSpec;
                    bool m_packageTotalUsedSpecHasBeenSet;

                    /**
                     * Deduction start time Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Deduction end time Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Extended information Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extendInfo;
                    bool m_extendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_
