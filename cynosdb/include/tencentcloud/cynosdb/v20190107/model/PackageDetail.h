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
                     * 获取AppId account ID.
                     * @return AppId AppId account ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppId account ID.
                     * @param _appId AppId account ID.
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
                     * 获取The unique ID of the resource package.
                     * @return PackageId The unique ID of the resource package.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of the resource package.
                     * @param _packageId The unique ID of the resource package.
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Successfully deduct capacity.
                     * @return SuccessDeductSpec Successfully deduct capacity.
                     * 
                     */
                    double GetSuccessDeductSpec() const;

                    /**
                     * 设置Successfully deduct capacity.
                     * @param _successDeductSpec Successfully deduct capacity.
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
                     * 获取The used capacity of the resource package up to the present.
                     * @return PackageTotalUsedSpec The used capacity of the resource package up to the present.
                     * 
                     */
                    double GetPackageTotalUsedSpec() const;

                    /**
                     * 设置The used capacity of the resource package up to the present.
                     * @param _packageTotalUsedSpec The used capacity of the resource package up to the present.
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
                     * 获取Deduction start time.
                     * @return StartTime Deduction start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Deduction start time.
                     * @param _startTime Deduction start time.
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
                     * 获取Deduction end time.
                     * @return EndTime Deduction end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Deduction end time.
                     * @param _endTime Deduction end time.
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
                     * 获取Extension Information
                     * @return ExtendInfo Extension Information
                     * 
                     */
                    std::string GetExtendInfo() const;

                    /**
                     * 设置Extension Information
                     * @param _extendInfo Extension Information
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
                     * AppId account ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * The unique ID of the resource package.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Successfully deduct capacity.
                     */
                    double m_successDeductSpec;
                    bool m_successDeductSpecHasBeenSet;

                    /**
                     * The used capacity of the resource package up to the present.
                     */
                    double m_packageTotalUsedSpec;
                    bool m_packageTotalUsedSpecHasBeenSet;

                    /**
                     * Deduction start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Deduction end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Extension Information
                     */
                    std::string m_extendInfo;
                    bool m_extendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_
