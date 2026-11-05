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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Billing value-added package usage information
                */
                class AddOnPackageInfo : public AbstractModel
                {
                public:
                    AddOnPackageInfo();
                    ~AddOnPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total value-added packages</p>
                     * @return AddOnTotal <p>Total value-added packages</p>
                     * 
                     */
                    double GetAddOnTotal() const;

                    /**
                     * 设置<p>Total value-added packages</p>
                     * @param _addOnTotal <p>Total value-added packages</p>
                     * 
                     */
                    void SetAddOnTotal(const double& _addOnTotal);

                    /**
                     * 判断参数 AddOnTotal 是否已赋值
                     * @return AddOnTotal 是否已赋值
                     * 
                     */
                    bool AddOnTotalHasBeenSet() const;

                    /**
                     * 获取<p>Value-added package amount</p>
                     * @return AddOnUsage <p>Value-added package amount</p>
                     * 
                     */
                    double GetAddOnUsage() const;

                    /**
                     * 设置<p>Value-added package amount</p>
                     * @param _addOnUsage <p>Value-added package amount</p>
                     * 
                     */
                    void SetAddOnUsage(const double& _addOnUsage);

                    /**
                     * 判断参数 AddOnUsage 是否已赋值
                     * @return AddOnUsage 是否已赋值
                     * 
                     */
                    bool AddOnUsageHasBeenSet() const;

                    /**
                     * 获取<p>Total number of exclusive concurrencies</p>
                     * @return ExclusiveConcurrency <p>Total number of exclusive concurrencies</p>
                     * 
                     */
                    uint64_t GetExclusiveConcurrency() const;

                    /**
                     * 设置<p>Total number of exclusive concurrencies</p>
                     * @param _exclusiveConcurrency <p>Total number of exclusive concurrencies</p>
                     * 
                     */
                    void SetExclusiveConcurrency(const uint64_t& _exclusiveConcurrency);

                    /**
                     * 判断参数 ExclusiveConcurrency 是否已赋值
                     * @return ExclusiveConcurrency 是否已赋值
                     * 
                     */
                    bool ExclusiveConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>2: Exhausted</li><li>3: Expired</li></ul>
                     * @return ResourceStatus <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>2: Exhausted</li><li>3: Expired</li></ul>
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置<p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>2: Exhausted</li><li>3: Expired</li></ul>
                     * @param _resourceStatus <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>2: Exhausted</li><li>3: Expired</li></ul>
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive concurrency status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * @return ConcurrencyStatus <p>Exclusive concurrency status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * 
                     */
                    uint64_t GetConcurrencyStatus() const;

                    /**
                     * 设置<p>Exclusive concurrency status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * @param _concurrencyStatus <p>Exclusive concurrency status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * 
                     */
                    void SetConcurrencyStatus(const uint64_t& _concurrencyStatus);

                    /**
                     * 判断参数 ConcurrencyStatus 是否已赋值
                     * @return ConcurrencyStatus 是否已赋值
                     * 
                     */
                    bool ConcurrencyStatusHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive tpm</p>
                     * @return ExclusiveTpm <p>Exclusive tpm</p>
                     * 
                     */
                    uint64_t GetExclusiveTpm() const;

                    /**
                     * 设置<p>Exclusive tpm</p>
                     * @param _exclusiveTpm <p>Exclusive tpm</p>
                     * 
                     */
                    void SetExclusiveTpm(const uint64_t& _exclusiveTpm);

                    /**
                     * 判断参数 ExclusiveTpm 是否已赋值
                     * @return ExclusiveTpm 是否已赋值
                     * 
                     */
                    bool ExclusiveTpmHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive tpm status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * @return ExclusiveTpmStatus <p>Exclusive tpm status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * 
                     */
                    uint64_t GetExclusiveTpmStatus() const;

                    /**
                     * 设置<p>Exclusive tpm status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * @param _exclusiveTpmStatus <p>Exclusive tpm status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     * 
                     */
                    void SetExclusiveTpmStatus(const uint64_t& _exclusiveTpmStatus);

                    /**
                     * 判断参数 ExclusiveTpmStatus 是否已赋值
                     * @return ExclusiveTpmStatus 是否已赋值
                     * 
                     */
                    bool ExclusiveTpmStatusHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive computing unit</p>
                     * @return ExclusiveComputeUnit <p>Exclusive computing unit</p>
                     * 
                     */
                    uint64_t GetExclusiveComputeUnit() const;

                    /**
                     * 设置<p>Exclusive computing unit</p>
                     * @param _exclusiveComputeUnit <p>Exclusive computing unit</p>
                     * 
                     */
                    void SetExclusiveComputeUnit(const uint64_t& _exclusiveComputeUnit);

                    /**
                     * 判断参数 ExclusiveComputeUnit 是否已赋值
                     * @return ExclusiveComputeUnit 是否已赋值
                     * 
                     */
                    bool ExclusiveComputeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive computing unit status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li><li>4: Terminated</li><li>5: Isolated</li><li>6: Not effective</li><li>7: Unavailable (when the package expires)</li></ul>
                     * @return ExclusiveComputeUnitStatus <p>Exclusive computing unit status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li><li>4: Terminated</li><li>5: Isolated</li><li>6: Not effective</li><li>7: Unavailable (when the package expires)</li></ul>
                     * 
                     */
                    uint64_t GetExclusiveComputeUnitStatus() const;

                    /**
                     * 设置<p>Exclusive computing unit status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li><li>4: Terminated</li><li>5: Isolated</li><li>6: Not effective</li><li>7: Unavailable (when the package expires)</li></ul>
                     * @param _exclusiveComputeUnitStatus <p>Exclusive computing unit status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li><li>4: Terminated</li><li>5: Isolated</li><li>6: Not effective</li><li>7: Unavailable (when the package expires)</li></ul>
                     * 
                     */
                    void SetExclusiveComputeUnitStatus(const uint64_t& _exclusiveComputeUnitStatus);

                    /**
                     * 判断参数 ExclusiveComputeUnitStatus 是否已赋值
                     * @return ExclusiveComputeUnitStatus 是否已赋值
                     * 
                     */
                    bool ExclusiveComputeUnitStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Total value-added packages</p>
                     */
                    double m_addOnTotal;
                    bool m_addOnTotalHasBeenSet;

                    /**
                     * <p>Value-added package amount</p>
                     */
                    double m_addOnUsage;
                    bool m_addOnUsageHasBeenSet;

                    /**
                     * <p>Total number of exclusive concurrencies</p>
                     */
                    uint64_t m_exclusiveConcurrency;
                    bool m_exclusiveConcurrencyHasBeenSet;

                    /**
                     * <p>Resource pack status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>2: Exhausted</li><li>3: Expired</li></ul>
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * <p>Exclusive concurrency status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     */
                    uint64_t m_concurrencyStatus;
                    bool m_concurrencyStatusHasBeenSet;

                    /**
                     * <p>Exclusive tpm</p>
                     */
                    uint64_t m_exclusiveTpm;
                    bool m_exclusiveTpmHasBeenSet;

                    /**
                     * <p>Exclusive tpm status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li></ul>
                     */
                    uint64_t m_exclusiveTpmStatus;
                    bool m_exclusiveTpmStatusHasBeenSet;

                    /**
                     * <p>Exclusive computing unit</p>
                     */
                    uint64_t m_exclusiveComputeUnit;
                    bool m_exclusiveComputeUnitHasBeenSet;

                    /**
                     * <p>Exclusive computing unit status</p><p>Enumeration values:</p><ul><li>1: Available</li><li>3: Expired</li><li>4: Terminated</li><li>5: Isolated</li><li>6: Not effective</li><li>7: Unavailable (when the package expires)</li></ul>
                     */
                    uint64_t m_exclusiveComputeUnitStatus;
                    bool m_exclusiveComputeUnitStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_
