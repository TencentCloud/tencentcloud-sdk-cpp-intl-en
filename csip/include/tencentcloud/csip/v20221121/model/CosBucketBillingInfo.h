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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Number of Buckets
                */
                class CosBucketBillingInfo : public AbstractModel
                {
                public:
                    CosBucketBillingInfo();
                    ~CosBucketBillingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>uin</p>
                     * @return OwnerUin <p>uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _ownerUin <p>uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Nickname</p>
                     * @return OwnerNickName <p>Nickname</p>
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置<p>Nickname</p>
                     * @param _ownerNickName <p>Nickname</p>
                     * 
                     */
                    void SetOwnerNickName(const std::string& _ownerNickName);

                    /**
                     * 判断参数 OwnerNickName 是否已赋值
                     * @return OwnerNickName 是否已赋值
                     * 
                     */
                    bool OwnerNickNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of buckets</p>
                     * @return BucketCount <p>Number of buckets</p>
                     * 
                     */
                    uint64_t GetBucketCount() const;

                    /**
                     * 设置<p>Number of buckets</p>
                     * @param _bucketCount <p>Number of buckets</p>
                     * 
                     */
                    void SetBucketCount(const uint64_t& _bucketCount);

                    /**
                     * 判断参数 BucketCount 是否已赋值
                     * @return BucketCount 是否已赋值
                     * 
                     */
                    bool BucketCountHasBeenSet() const;

                    /**
                     * 获取<p>0 Not purchased 1 Purchased separately 2 Shared</p>
                     * @return BuyStatus <p>0 Not purchased 1 Purchased separately 2 Shared</p>
                     * 
                     */
                    uint64_t GetBuyStatus() const;

                    /**
                     * 设置<p>0 Not purchased 1 Purchased separately 2 Shared</p>
                     * @param _buyStatus <p>0 Not purchased 1 Purchased separately 2 Shared</p>
                     * 
                     */
                    void SetBuyStatus(const uint64_t& _buyStatus);

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取<p>Shared account appid.</p>
                     * @return ShareFromAppId <p>Shared account appid.</p>
                     * 
                     */
                    uint64_t GetShareFromAppId() const;

                    /**
                     * 设置<p>Shared account appid.</p>
                     * @param _shareFromAppId <p>Shared account appid.</p>
                     * 
                     */
                    void SetShareFromAppId(const uint64_t& _shareFromAppId);

                    /**
                     * 判断参数 ShareFromAppId 是否已赋值
                     * @return ShareFromAppId 是否已赋值
                     * 
                     */
                    bool ShareFromAppIdHasBeenSet() const;

                    /**
                     * 获取<p>uin of the shared account</p>
                     * @return ShareFromUin <p>uin of the shared account</p>
                     * 
                     */
                    std::string GetShareFromUin() const;

                    /**
                     * 设置<p>uin of the shared account</p>
                     * @param _shareFromUin <p>uin of the shared account</p>
                     * 
                     */
                    void SetShareFromUin(const std::string& _shareFromUin);

                    /**
                     * 判断参数 ShareFromUin 是否已赋值
                     * @return ShareFromUin 是否已赋值
                     * 
                     */
                    bool ShareFromUinHasBeenSet() const;

                    /**
                     * 获取<p>Shared account nickname</p>
                     * @return ShareFromNickName <p>Shared account nickname</p>
                     * 
                     */
                    std::string GetShareFromNickName() const;

                    /**
                     * 设置<p>Shared account nickname</p>
                     * @param _shareFromNickName <p>Shared account nickname</p>
                     * 
                     */
                    void SetShareFromNickName(const std::string& _shareFromNickName);

                    /**
                     * 判断参数 ShareFromNickName 是否已赋值
                     * @return ShareFromNickName 是否已赋值
                     * 
                     */
                    bool ShareFromNickNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of monitored buckets</p>
                     * @return MonitorBucketCount <p>Number of monitored buckets</p>
                     * 
                     */
                    uint64_t GetMonitorBucketCount() const;

                    /**
                     * 设置<p>Number of monitored buckets</p>
                     * @param _monitorBucketCount <p>Number of monitored buckets</p>
                     * 
                     */
                    void SetMonitorBucketCount(const uint64_t& _monitorBucketCount);

                    /**
                     * 判断参数 MonitorBucketCount 是否已赋值
                     * @return MonitorBucketCount 是否已赋值
                     * 
                     */
                    bool MonitorBucketCountHasBeenSet() const;

                    /**
                     * 获取<p>0: disable; 1: enable</p>
                     * @return IsAutoMonitor <p>0: disable; 1: enable</p>
                     * 
                     */
                    uint64_t GetIsAutoMonitor() const;

                    /**
                     * 设置<p>0: disable; 1: enable</p>
                     * @param _isAutoMonitor <p>0: disable; 1: enable</p>
                     * 
                     */
                    void SetIsAutoMonitor(const uint64_t& _isAutoMonitor);

                    /**
                     * 判断参数 IsAutoMonitor 是否已赋值
                     * @return IsAutoMonitor 是否已赋值
                     * 
                     */
                    bool IsAutoMonitorHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable the allowlist log feature</p>
                     * @return LogFeatureWhitelist <p>Whether to enable the allowlist log feature</p>
                     * 
                     */
                    bool GetLogFeatureWhitelist() const;

                    /**
                     * 设置<p>Whether to enable the allowlist log feature</p>
                     * @param _logFeatureWhitelist <p>Whether to enable the allowlist log feature</p>
                     * 
                     */
                    void SetLogFeatureWhitelist(const bool& _logFeatureWhitelist);

                    /**
                     * 判断参数 LogFeatureWhitelist 是否已赋值
                     * @return LogFeatureWhitelist 是否已赋值
                     * 
                     */
                    bool LogFeatureWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>Existence of new postpaid orders</p>
                     * @return IsHaveNewPostOrder <p>Existence of new postpaid orders</p>
                     * 
                     */
                    bool GetIsHaveNewPostOrder() const;

                    /**
                     * 设置<p>Existence of new postpaid orders</p>
                     * @param _isHaveNewPostOrder <p>Existence of new postpaid orders</p>
                     * 
                     */
                    void SetIsHaveNewPostOrder(const bool& _isHaveNewPostOrder);

                    /**
                     * 判断参数 IsHaveNewPostOrder 是否已赋值
                     * @return IsHaveNewPostOrder 是否已赋值
                     * 
                     */
                    bool IsHaveNewPostOrderHasBeenSet() const;

                    /**
                     * 获取<p>Existence of legacy postpaid orders</p>
                     * @return IsHaveOldPostOrder <p>Existence of legacy postpaid orders</p>
                     * 
                     */
                    bool GetIsHaveOldPostOrder() const;

                    /**
                     * 设置<p>Existence of legacy postpaid orders</p>
                     * @param _isHaveOldPostOrder <p>Existence of legacy postpaid orders</p>
                     * 
                     */
                    void SetIsHaveOldPostOrder(const bool& _isHaveOldPostOrder);

                    /**
                     * 判断参数 IsHaveOldPostOrder 是否已赋值
                     * @return IsHaveOldPostOrder 是否已赋值
                     * 
                     */
                    bool IsHaveOldPostOrderHasBeenSet() const;

                    /**
                     * 获取<p>Postpaid Product List</p>
                     * @return PostProductList <p>Postpaid Product List</p>
                     * 
                     */
                    std::vector<int64_t> GetPostProductList() const;

                    /**
                     * 设置<p>Postpaid Product List</p>
                     * @param _postProductList <p>Postpaid Product List</p>
                     * 
                     */
                    void SetPostProductList(const std::vector<int64_t>& _postProductList);

                    /**
                     * 判断参数 PostProductList 是否已赋值
                     * @return PostProductList 是否已赋值
                     * 
                     */
                    bool PostProductListHasBeenSet() const;

                    /**
                     * 获取<p>Default sampling rate for newly-added buckets under this AppId, unit: ratio from 0 to 1</p><p>Value range: [0.001, 1]</p>
                     * @return DefaultSampleRate <p>Default sampling rate for newly-added buckets under this AppId, unit: ratio from 0 to 1</p><p>Value range: [0.001, 1]</p>
                     * 
                     */
                    double GetDefaultSampleRate() const;

                    /**
                     * 设置<p>Default sampling rate for newly-added buckets under this AppId, unit: ratio from 0 to 1</p><p>Value range: [0.001, 1]</p>
                     * @param _defaultSampleRate <p>Default sampling rate for newly-added buckets under this AppId, unit: ratio from 0 to 1</p><p>Value range: [0.001, 1]</p>
                     * 
                     */
                    void SetDefaultSampleRate(const double& _defaultSampleRate);

                    /**
                     * 判断参数 DefaultSampleRate 是否已赋值
                     * @return DefaultSampleRate 是否已赋值
                     * 
                     */
                    bool DefaultSampleRateHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a whitelist, used only to control the frontend range and accuracy</p>
                     * @return BucketSamplingRateWhitelist <p>Whether it is a whitelist, used only to control the frontend range and accuracy</p>
                     * 
                     */
                    bool GetBucketSamplingRateWhitelist() const;

                    /**
                     * 设置<p>Whether it is a whitelist, used only to control the frontend range and accuracy</p>
                     * @param _bucketSamplingRateWhitelist <p>Whether it is a whitelist, used only to control the frontend range and accuracy</p>
                     * 
                     */
                    void SetBucketSamplingRateWhitelist(const bool& _bucketSamplingRateWhitelist);

                    /**
                     * 判断参数 BucketSamplingRateWhitelist 是否已赋值
                     * @return BucketSamplingRateWhitelist 是否已赋值
                     * 
                     */
                    bool BucketSamplingRateWhitelistHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Nickname</p>
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * <p>Number of buckets</p>
                     */
                    uint64_t m_bucketCount;
                    bool m_bucketCountHasBeenSet;

                    /**
                     * <p>0 Not purchased 1 Purchased separately 2 Shared</p>
                     */
                    uint64_t m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * <p>Shared account appid.</p>
                     */
                    uint64_t m_shareFromAppId;
                    bool m_shareFromAppIdHasBeenSet;

                    /**
                     * <p>uin of the shared account</p>
                     */
                    std::string m_shareFromUin;
                    bool m_shareFromUinHasBeenSet;

                    /**
                     * <p>Shared account nickname</p>
                     */
                    std::string m_shareFromNickName;
                    bool m_shareFromNickNameHasBeenSet;

                    /**
                     * <p>Number of monitored buckets</p>
                     */
                    uint64_t m_monitorBucketCount;
                    bool m_monitorBucketCountHasBeenSet;

                    /**
                     * <p>0: disable; 1: enable</p>
                     */
                    uint64_t m_isAutoMonitor;
                    bool m_isAutoMonitorHasBeenSet;

                    /**
                     * <p>Whether to enable the allowlist log feature</p>
                     */
                    bool m_logFeatureWhitelist;
                    bool m_logFeatureWhitelistHasBeenSet;

                    /**
                     * <p>Existence of new postpaid orders</p>
                     */
                    bool m_isHaveNewPostOrder;
                    bool m_isHaveNewPostOrderHasBeenSet;

                    /**
                     * <p>Existence of legacy postpaid orders</p>
                     */
                    bool m_isHaveOldPostOrder;
                    bool m_isHaveOldPostOrderHasBeenSet;

                    /**
                     * <p>Postpaid Product List</p>
                     */
                    std::vector<int64_t> m_postProductList;
                    bool m_postProductListHasBeenSet;

                    /**
                     * <p>Default sampling rate for newly-added buckets under this AppId, unit: ratio from 0 to 1</p><p>Value range: [0.001, 1]</p>
                     */
                    double m_defaultSampleRate;
                    bool m_defaultSampleRateHasBeenSet;

                    /**
                     * <p>Whether it is a whitelist, used only to control the frontend range and accuracy</p>
                     */
                    bool m_bucketSamplingRateWhitelist;
                    bool m_bucketSamplingRateWhitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETBILLINGINFO_H_
