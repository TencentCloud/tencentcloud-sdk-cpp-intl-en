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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/TagFilter.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListBGPInstances request structure.
                */
                class DescribeListBGPInstancesRequest : public AbstractModel
                {
                public:
                    DescribeListBGPInstancesRequest();
                    ~DescribeListBGPInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @return Limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @param Limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters by IP.
                     * @return FilterIp Filters by IP.
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置Filters by IP.
                     * @param FilterIp Filters by IP.
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID filter. For example, `bgp-00000001`.
                     * @return FilterInstanceId Anti-DDoS instance ID filter. For example, `bgp-00000001`.
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID filter. For example, `bgp-00000001`.
                     * @param FilterInstanceId Anti-DDoS instance ID filter. For example, `bgp-00000001`.
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取Filters by region. For example, `ap-guangzhou`.
                     * @return FilterRegion Filters by region. For example, `ap-guangzhou`.
                     */
                    std::string GetFilterRegion() const;

                    /**
                     * 设置Filters by region. For example, `ap-guangzhou`.
                     * @param FilterRegion Filters by region. For example, `ap-guangzhou`.
                     */
                    void SetFilterRegion(const std::string& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取Filters by name.
                     * @return FilterName Filters by name.
                     */
                    std::string GetFilterName() const;

                    /**
                     * 设置Filters by name.
                     * @param FilterName Filters by name.
                     */
                    void SetFilterName(const std::string& _filterName);

                    /**
                     * 判断参数 FilterName 是否已赋值
                     * @return FilterName 是否已赋值
                     */
                    bool FilterNameHasBeenSet() const;

                    /**
                     * 获取Line filter. Valid values: 1: BGP; 2: Non-BGP.
                     * @return FilterLine Line filter. Valid values: 1: BGP; 2: Non-BGP.
                     */
                    uint64_t GetFilterLine() const;

                    /**
                     * 设置Line filter. Valid values: 1: BGP; 2: Non-BGP.
                     * @param FilterLine Line filter. Valid values: 1: BGP; 2: Non-BGP.
                     */
                    void SetFilterLine(const uint64_t& _filterLine);

                    /**
                     * 判断参数 FilterLine 是否已赋值
                     * @return FilterLine 是否已赋值
                     */
                    bool FilterLineHasBeenSet() const;

                    /**
                     * 获取Filters by instance status. `idle`: Running; `attacking`: Being attacked; `blocking`: Being blocked.
                     * @return FilterStatus Filters by instance status. `idle`: Running; `attacking`: Being attacked; `blocking`: Being blocked.
                     */
                    std::string GetFilterStatus() const;

                    /**
                     * 设置Filters by instance status. `idle`: Running; `attacking`: Being attacked; `blocking`: Being blocked.
                     * @param FilterStatus Filters by instance status. `idle`: Running; `attacking`: Being attacked; `blocking`: Being blocked.
                     */
                    void SetFilterStatus(const std::string& _filterStatus);

                    /**
                     * 判断参数 FilterStatus 是否已赋值
                     * @return FilterStatus 是否已赋值
                     */
                    bool FilterStatusHasBeenSet() const;

                    /**
                     * 获取Filters by binding status. `bounding`: The instance is bound; `failed`: The binding failed.
                     * @return FilterBoundStatus Filters by binding status. `bounding`: The instance is bound; `failed`: The binding failed.
                     */
                    std::string GetFilterBoundStatus() const;

                    /**
                     * 设置Filters by binding status. `bounding`: The instance is bound; `failed`: The binding failed.
                     * @param FilterBoundStatus Filters by binding status. `bounding`: The instance is bound; `failed`: The binding failed.
                     */
                    void SetFilterBoundStatus(const std::string& _filterBoundStatus);

                    /**
                     * 判断参数 FilterBoundStatus 是否已赋值
                     * @return FilterBoundStatus 是否已赋值
                     */
                    bool FilterBoundStatusHasBeenSet() const;

                    /**
                     * 获取Array of instance IDs
                     * @return FilterInstanceIdList Array of instance IDs
                     */
                    std::vector<std::string> GetFilterInstanceIdList() const;

                    /**
                     * 设置Array of instance IDs
                     * @param FilterInstanceIdList Array of instance IDs
                     */
                    void SetFilterInstanceIdList(const std::vector<std::string>& _filterInstanceIdList);

                    /**
                     * 判断参数 FilterInstanceIdList 是否已赋值
                     * @return FilterInstanceIdList 是否已赋值
                     */
                    bool FilterInstanceIdListHasBeenSet() const;

                    /**
                     * 获取Enterprise edition. Values: `1` (the Convoy package included), `2` (the Convoy package not included)
                     * @return FilterEnterpriseFlag Enterprise edition. Values: `1` (the Convoy package included), `2` (the Convoy package not included)
                     */
                    uint64_t GetFilterEnterpriseFlag() const;

                    /**
                     * 设置Enterprise edition. Values: `1` (the Convoy package included), `2` (the Convoy package not included)
                     * @param FilterEnterpriseFlag Enterprise edition. Values: `1` (the Convoy package included), `2` (the Convoy package not included)
                     */
                    void SetFilterEnterpriseFlag(const uint64_t& _filterEnterpriseFlag);

                    /**
                     * 判断参数 FilterEnterpriseFlag 是否已赋值
                     * @return FilterEnterpriseFlag 是否已赋值
                     */
                    bool FilterEnterpriseFlagHasBeenSet() const;

                    /**
                     * 获取Whether it’s a Lighthouse edition
                     * @return FilterLightFlag Whether it’s a Lighthouse edition
                     */
                    uint64_t GetFilterLightFlag() const;

                    /**
                     * 设置Whether it’s a Lighthouse edition
                     * @param FilterLightFlag Whether it’s a Lighthouse edition
                     */
                    void SetFilterLightFlag(const uint64_t& _filterLightFlag);

                    /**
                     * 判断参数 FilterLightFlag 是否已赋值
                     * @return FilterLightFlag 是否已赋值
                     */
                    bool FilterLightFlagHasBeenSet() const;

                    /**
                     * 获取Whether it’s a Channel edition
                     * @return FilterChannelFlag Whether it’s a Channel edition
                     */
                    uint64_t GetFilterChannelFlag() const;

                    /**
                     * 设置Whether it’s a Channel edition
                     * @param FilterChannelFlag Whether it’s a Channel edition
                     */
                    void SetFilterChannelFlag(const uint64_t& _filterChannelFlag);

                    /**
                     * 判断参数 FilterChannelFlag 是否已赋值
                     * @return FilterChannelFlag 是否已赋值
                     */
                    bool FilterChannelFlagHasBeenSet() const;

                    /**
                     * 获取Filters by tag
                     * @return FilterTag Filters by tag
                     */
                    TagFilter GetFilterTag() const;

                    /**
                     * 设置Filters by tag
                     * @param FilterTag Filters by tag
                     */
                    void SetFilterTag(const TagFilter& _filterTag);

                    /**
                     * 判断参数 FilterTag 是否已赋值
                     * @return FilterTag 是否已赋值
                     */
                    bool FilterTagHasBeenSet() const;

                    /**
                     * 获取Filters out trial instances. Values: `1` (emergency protection instances), `2` (PLG instances)
                     * @return FilterTrialFlag Filters out trial instances. Values: `1` (emergency protection instances), `2` (PLG instances)
                     */
                    uint64_t GetFilterTrialFlag() const;

                    /**
                     * 设置Filters out trial instances. Values: `1` (emergency protection instances), `2` (PLG instances)
                     * @param FilterTrialFlag Filters out trial instances. Values: `1` (emergency protection instances), `2` (PLG instances)
                     */
                    void SetFilterTrialFlag(const uint64_t& _filterTrialFlag);

                    /**
                     * 判断参数 FilterTrialFlag 是否已赋值
                     * @return FilterTrialFlag 是否已赋值
                     */
                    bool FilterTrialFlagHasBeenSet() const;

                    /**
                     * 获取Filters out Convoy instances
                     * @return FilterConvoy Filters out Convoy instances
                     */
                    uint64_t GetFilterConvoy() const;

                    /**
                     * 设置Filters out Convoy instances
                     * @param FilterConvoy Filters out Convoy instances
                     */
                    void SetFilterConvoy(const uint64_t& _filterConvoy);

                    /**
                     * 判断参数 FilterConvoy 是否已赋值
                     * @return FilterConvoy 是否已赋值
                     */
                    bool FilterConvoyHasBeenSet() const;

                    /**
                     * 获取Whether to exclude the advanced information (such as `InstanceList[0].Usage`). Values: `true` (exclude), `false` (do not exclude). The default value is `false`.
                     * @return ExcludeAdvancedInfo Whether to exclude the advanced information (such as `InstanceList[0].Usage`). Values: `true` (exclude), `false` (do not exclude). The default value is `false`.
                     */
                    bool GetExcludeAdvancedInfo() const;

                    /**
                     * 设置Whether to exclude the advanced information (such as `InstanceList[0].Usage`). Values: `true` (exclude), `false` (do not exclude). The default value is `false`.
                     * @param ExcludeAdvancedInfo Whether to exclude the advanced information (such as `InstanceList[0].Usage`). Values: `true` (exclude), `false` (do not exclude). The default value is `false`.
                     */
                    void SetExcludeAdvancedInfo(const bool& _excludeAdvancedInfo);

                    /**
                     * 判断参数 ExcludeAdvancedInfo 是否已赋值
                     * @return ExcludeAdvancedInfo 是否已赋值
                     */
                    bool ExcludeAdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters by IP.
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * Anti-DDoS instance ID filter. For example, `bgp-00000001`.
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * Filters by region. For example, `ap-guangzhou`.
                     */
                    std::string m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * Filters by name.
                     */
                    std::string m_filterName;
                    bool m_filterNameHasBeenSet;

                    /**
                     * Line filter. Valid values: 1: BGP; 2: Non-BGP.
                     */
                    uint64_t m_filterLine;
                    bool m_filterLineHasBeenSet;

                    /**
                     * Filters by instance status. `idle`: Running; `attacking`: Being attacked; `blocking`: Being blocked.
                     */
                    std::string m_filterStatus;
                    bool m_filterStatusHasBeenSet;

                    /**
                     * Filters by binding status. `bounding`: The instance is bound; `failed`: The binding failed.
                     */
                    std::string m_filterBoundStatus;
                    bool m_filterBoundStatusHasBeenSet;

                    /**
                     * Array of instance IDs
                     */
                    std::vector<std::string> m_filterInstanceIdList;
                    bool m_filterInstanceIdListHasBeenSet;

                    /**
                     * Enterprise edition. Values: `1` (the Convoy package included), `2` (the Convoy package not included)
                     */
                    uint64_t m_filterEnterpriseFlag;
                    bool m_filterEnterpriseFlagHasBeenSet;

                    /**
                     * Whether it’s a Lighthouse edition
                     */
                    uint64_t m_filterLightFlag;
                    bool m_filterLightFlagHasBeenSet;

                    /**
                     * Whether it’s a Channel edition
                     */
                    uint64_t m_filterChannelFlag;
                    bool m_filterChannelFlagHasBeenSet;

                    /**
                     * Filters by tag
                     */
                    TagFilter m_filterTag;
                    bool m_filterTagHasBeenSet;

                    /**
                     * Filters out trial instances. Values: `1` (emergency protection instances), `2` (PLG instances)
                     */
                    uint64_t m_filterTrialFlag;
                    bool m_filterTrialFlagHasBeenSet;

                    /**
                     * Filters out Convoy instances
                     */
                    uint64_t m_filterConvoy;
                    bool m_filterConvoyHasBeenSet;

                    /**
                     * Whether to exclude the advanced information (such as `InstanceList[0].Usage`). Values: `true` (exclude), `false` (do not exclude). The default value is `false`.
                     */
                    bool m_excludeAdvancedInfo;
                    bool m_excludeAdvancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPINSTANCESREQUEST_H_
