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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskAlarmInfo.h>
#include <tencentcloud/csip/v20221121/model/CosBucketAccessWay.h>
#include <tencentcloud/csip/v20221121/model/CosAssetDataScanDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Cos asset information
                */
                class CosAssetInfo : public AbstractModel
                {
                public:
                    CosAssetInfo();
                    ~CosAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
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
                     * 获取<p>cos bucket name</p>
                     * @return BucketName <p>cos bucket name</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>cos bucket name</p>
                     * @param _bucketName <p>cos bucket name</p>
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取<p>cos region name</p>
                     * @return BucketRegion <p>cos region name</p>
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置<p>cos region name</p>
                     * @param _bucketRegion <p>cos region name</p>
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取<p>Region code value</p>
                     * @return BucketRegionCode <p>Region code value</p>
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置<p>Region code value</p>
                     * @param _bucketRegionCode <p>Region code value</p>
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>cos bucket remark</p>
                     * @return BucketMarker <p>cos bucket remark</p>
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置<p>cos bucket remark</p>
                     * @param _bucketMarker <p>cos bucket remark</p>
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                    /**
                     * 获取<p>Owner of the cos bucket root account</p>
                     * @return BucketOwnerUin <p>Owner of the cos bucket root account</p>
                     * 
                     */
                    std::string GetBucketOwnerUin() const;

                    /**
                     * 设置<p>Owner of the cos bucket root account</p>
                     * @param _bucketOwnerUin <p>Owner of the cos bucket root account</p>
                     * 
                     */
                    void SetBucketOwnerUin(const std::string& _bucketOwnerUin);

                    /**
                     * 判断参数 BucketOwnerUin 是否已赋值
                     * @return BucketOwnerUin 是否已赋值
                     * 
                     */
                    bool BucketOwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Nickname of the cos root account owner</p>
                     * @return BucketOwnerNickName <p>Nickname of the cos root account owner</p>
                     * 
                     */
                    std::string GetBucketOwnerNickName() const;

                    /**
                     * 设置<p>Nickname of the cos root account owner</p>
                     * @param _bucketOwnerNickName <p>Nickname of the cos root account owner</p>
                     * 
                     */
                    void SetBucketOwnerNickName(const std::string& _bucketOwnerNickName);

                    /**
                     * 判断参数 BucketOwnerNickName 是否已赋值
                     * @return BucketOwnerNickName 是否已赋值
                     * 
                     */
                    bool BucketOwnerNickNameHasBeenSet() const;

                    /**
                     * 获取<p>cos bucket tag detail</p>
                     * @return BucketTagInfo <p>cos bucket tag detail</p>
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置<p>cos bucket tag detail</p>
                     * @param _bucketTagInfo <p>cos bucket tag detail</p>
                     * 
                     */
                    void SetBucketTagInfo(const std::string& _bucketTagInfo);

                    /**
                     * 判断参数 BucketTagInfo 是否已赋值
                     * @return BucketTagInfo 是否已赋值
                     * 
                     */
                    bool BucketTagInfoHasBeenSet() const;

                    /**
                     * 获取<p>Security advice<br>1 No abnormality detected<br>2 Hardening recommended<br>3 Process now</p>
                     * @return BucketSecuritySuggestion <p>Security advice<br>1 No abnormality detected<br>2 Hardening recommended<br>3 Process now</p>
                     * 
                     */
                    int64_t GetBucketSecuritySuggestion() const;

                    /**
                     * 设置<p>Security advice<br>1 No abnormality detected<br>2 Hardening recommended<br>3 Process now</p>
                     * @param _bucketSecuritySuggestion <p>Security advice<br>1 No abnormality detected<br>2 Hardening recommended<br>3 Process now</p>
                     * 
                     */
                    void SetBucketSecuritySuggestion(const int64_t& _bucketSecuritySuggestion);

                    /**
                     * 判断参数 BucketSecuritySuggestion 是否已赋值
                     * @return BucketSecuritySuggestion 是否已赋值
                     * 
                     */
                    bool BucketSecuritySuggestionHasBeenSet() const;

                    /**
                     * 获取<p>alarm list</p>
                     * @return BucketAlarmList <p>alarm list</p>
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketAlarmList() const;

                    /**
                     * 设置<p>alarm list</p>
                     * @param _bucketAlarmList <p>alarm list</p>
                     * 
                     */
                    void SetBucketAlarmList(const std::vector<CosRiskAlarmInfo>& _bucketAlarmList);

                    /**
                     * 判断参数 BucketAlarmList 是否已赋值
                     * @return BucketAlarmList 是否已赋值
                     * 
                     */
                    bool BucketAlarmListHasBeenSet() const;

                    /**
                     * 获取<p>Risk list</p>
                     * @return BucketRiskList <p>Risk list</p>
                     * 
                     */
                    std::vector<CosRiskAlarmInfo> GetBucketRiskList() const;

                    /**
                     * 设置<p>Risk list</p>
                     * @param _bucketRiskList <p>Risk list</p>
                     * 
                     */
                    void SetBucketRiskList(const std::vector<CosRiskAlarmInfo>& _bucketRiskList);

                    /**
                     * 判断参数 BucketRiskList 是否已赋值
                     * @return BucketRiskList 是否已赋值
                     * 
                     */
                    bool BucketRiskListHasBeenSet() const;

                    /**
                     * 获取<p>Number of source IPs for calls</p>
                     * @return BucketInvokeSourceIpCount <p>Number of source IPs for calls</p>
                     * 
                     */
                    int64_t GetBucketInvokeSourceIpCount() const;

                    /**
                     * 设置<p>Number of source IPs for calls</p>
                     * @param _bucketInvokeSourceIpCount <p>Number of source IPs for calls</p>
                     * 
                     */
                    void SetBucketInvokeSourceIpCount(const int64_t& _bucketInvokeSourceIpCount);

                    /**
                     * 判断参数 BucketInvokeSourceIpCount 是否已赋值
                     * @return BucketInvokeSourceIpCount 是否已赋值
                     * 
                     */
                    bool BucketInvokeSourceIpCountHasBeenSet() const;

                    /**
                     * 获取<p>Access policy</p>
                     * @return BucketAccessWay <p>Access policy</p>
                     * 
                     */
                    CosBucketAccessWay GetBucketAccessWay() const;

                    /**
                     * 设置<p>Access policy</p>
                     * @param _bucketAccessWay <p>Access policy</p>
                     * 
                     */
                    void SetBucketAccessWay(const CosBucketAccessWay& _bucketAccessWay);

                    /**
                     * 判断参数 BucketAccessWay 是否已赋值
                     * @return BucketAccessWay 是否已赋值
                     * 
                     */
                    bool BucketAccessWayHasBeenSet() const;

                    /**
                     * 获取<p>Creation time Unix timestamp in milliseconds</p>
                     * @return CreateTime <p>Creation time Unix timestamp in milliseconds</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time Unix timestamp in milliseconds</p>
                     * @param _createTime <p>Creation time Unix timestamp in milliseconds</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last access time in Unix timestamp in milliseconds</p>
                     * @return LastAccessTime <p>Last access time in Unix timestamp in milliseconds</p>
                     * 
                     */
                    int64_t GetLastAccessTime() const;

                    /**
                     * 设置<p>Last access time in Unix timestamp in milliseconds</p>
                     * @param _lastAccessTime <p>Last access time in Unix timestamp in milliseconds</p>
                     * 
                     */
                    void SetLastAccessTime(const int64_t& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取<p>Bucket id</p>
                     * @return BucketId <p>Bucket id</p>
                     * 
                     */
                    uint64_t GetBucketId() const;

                    /**
                     * 设置<p>Bucket id</p>
                     * @param _bucketId <p>Bucket id</p>
                     * 
                     */
                    void SetBucketId(const uint64_t& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取<p>0 Off<br>1 On</p>
                     * @return MonitorStatus <p>0 Off<br>1 On</p>
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置<p>0 Off<br>1 On</p>
                     * @param _monitorStatus <p>0 Off<br>1 On</p>
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取<p>Data identification scan information.</p>
                     * @return DataScanInfo <p>Data identification scan information.</p>
                     * 
                     */
                    CosAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置<p>Data identification scan information.</p>
                     * @param _dataScanInfo <p>Data identification scan information.</p>
                     * 
                     */
                    void SetDataScanInfo(const CosAssetDataScanDetail& _dataScanInfo);

                    /**
                     * 判断参数 DataScanInfo 是否已赋值
                     * @return DataScanInfo 是否已赋值
                     * 
                     */
                    bool DataScanInfoHasBeenSet() const;

                    /**
                     * 获取<p>Bucket Az type</p><p>Enumeration values:</p><ul><li>MAZ: Multi-Az</li><li>SAZ: Single-Az</li></ul>
                     * @return BucketAzType <p>Bucket Az type</p><p>Enumeration values:</p><ul><li>MAZ: Multi-Az</li><li>SAZ: Single-Az</li></ul>
                     * 
                     */
                    std::string GetBucketAzType() const;

                    /**
                     * 设置<p>Bucket Az type</p><p>Enumeration values:</p><ul><li>MAZ: Multi-Az</li><li>SAZ: Single-Az</li></ul>
                     * @param _bucketAzType <p>Bucket Az type</p><p>Enumeration values:</p><ul><li>MAZ: Multi-Az</li><li>SAZ: Single-Az</li></ul>
                     * 
                     */
                    void SetBucketAzType(const std::string& _bucketAzType);

                    /**
                     * 判断参数 BucketAzType 是否已赋值
                     * @return BucketAzType 是否已赋值
                     * 
                     */
                    bool BucketAzTypeHasBeenSet() const;

                    /**
                     * 获取<p>Bucket storage size</p><p>Default value: 0</p>
                     * @return BucketStorageSize <p>Bucket storage size</p><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetBucketStorageSize() const;

                    /**
                     * 设置<p>Bucket storage size</p><p>Default value: 0</p>
                     * @param _bucketStorageSize <p>Bucket storage size</p><p>Default value: 0</p>
                     * 
                     */
                    void SetBucketStorageSize(const int64_t& _bucketStorageSize);

                    /**
                     * 判断参数 BucketStorageSize 是否已赋值
                     * @return BucketStorageSize 是否已赋值
                     * 
                     */
                    bool BucketStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Bucket object count</p><p>Default value: 0</p>
                     * @return BucketObjectCount <p>Bucket object count</p><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetBucketObjectCount() const;

                    /**
                     * 设置<p>Bucket object count</p><p>Default value: 0</p>
                     * @param _bucketObjectCount <p>Bucket object count</p><p>Default value: 0</p>
                     * 
                     */
                    void SetBucketObjectCount(const int64_t& _bucketObjectCount);

                    /**
                     * 判断参数 BucketObjectCount 是否已赋值
                     * @return BucketObjectCount 是否已赋值
                     * 
                     */
                    bool BucketObjectCountHasBeenSet() const;

                    /**
                     * 获取<p>Bucket sensitive identification sampling rate</p><p>Value range: [0, 1]</p><p>Default value: 0</p>
                     * @return IdentifySampleRate <p>Bucket sensitive identification sampling rate</p><p>Value range: [0, 1]</p><p>Default value: 0</p>
                     * 
                     */
                    double GetIdentifySampleRate() const;

                    /**
                     * 设置<p>Bucket sensitive identification sampling rate</p><p>Value range: [0, 1]</p><p>Default value: 0</p>
                     * @param _identifySampleRate <p>Bucket sensitive identification sampling rate</p><p>Value range: [0, 1]</p><p>Default value: 0</p>
                     * 
                     */
                    void SetIdentifySampleRate(const double& _identifySampleRate);

                    /**
                     * 判断参数 IdentifySampleRate 是否已赋值
                     * @return IdentifySampleRate 是否已赋值
                     * 
                     */
                    bool IdentifySampleRateHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>cos bucket name</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>cos region name</p>
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * <p>Region code value</p>
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * <p>cos bucket remark</p>
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * <p>Owner of the cos bucket root account</p>
                     */
                    std::string m_bucketOwnerUin;
                    bool m_bucketOwnerUinHasBeenSet;

                    /**
                     * <p>Nickname of the cos root account owner</p>
                     */
                    std::string m_bucketOwnerNickName;
                    bool m_bucketOwnerNickNameHasBeenSet;

                    /**
                     * <p>cos bucket tag detail</p>
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * <p>Security advice<br>1 No abnormality detected<br>2 Hardening recommended<br>3 Process now</p>
                     */
                    int64_t m_bucketSecuritySuggestion;
                    bool m_bucketSecuritySuggestionHasBeenSet;

                    /**
                     * <p>alarm list</p>
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketAlarmList;
                    bool m_bucketAlarmListHasBeenSet;

                    /**
                     * <p>Risk list</p>
                     */
                    std::vector<CosRiskAlarmInfo> m_bucketRiskList;
                    bool m_bucketRiskListHasBeenSet;

                    /**
                     * <p>Number of source IPs for calls</p>
                     */
                    int64_t m_bucketInvokeSourceIpCount;
                    bool m_bucketInvokeSourceIpCountHasBeenSet;

                    /**
                     * <p>Access policy</p>
                     */
                    CosBucketAccessWay m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * <p>Creation time Unix timestamp in milliseconds</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last access time in Unix timestamp in milliseconds</p>
                     */
                    int64_t m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * <p>Bucket id</p>
                     */
                    uint64_t m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * <p>0 Off<br>1 On</p>
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * <p>Data identification scan information.</p>
                     */
                    CosAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                    /**
                     * <p>Bucket Az type</p><p>Enumeration values:</p><ul><li>MAZ: Multi-Az</li><li>SAZ: Single-Az</li></ul>
                     */
                    std::string m_bucketAzType;
                    bool m_bucketAzTypeHasBeenSet;

                    /**
                     * <p>Bucket storage size</p><p>Default value: 0</p>
                     */
                    int64_t m_bucketStorageSize;
                    bool m_bucketStorageSizeHasBeenSet;

                    /**
                     * <p>Bucket object count</p><p>Default value: 0</p>
                     */
                    int64_t m_bucketObjectCount;
                    bool m_bucketObjectCountHasBeenSet;

                    /**
                     * <p>Bucket sensitive identification sampling rate</p><p>Value range: [0, 1]</p><p>Default value: 0</p>
                     */
                    double m_identifySampleRate;
                    bool m_identifySampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETINFO_H_
