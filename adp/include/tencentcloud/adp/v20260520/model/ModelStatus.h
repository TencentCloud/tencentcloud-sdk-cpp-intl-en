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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_

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
                * <p>Model status</p>
                */
                class ModelStatus : public AbstractModel
                {
                public:
                    ModelStatus();
                    ~ModelStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of exclusive concurrencies</p>
                     * @return Concurrency <p>Number of exclusive concurrencies</p>
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置<p>Number of exclusive concurrencies</p>
                     * @param _concurrency <p>Number of exclusive concurrencies</p>
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is exclusive concurrency</p>
                     * @return IsExclusive <p>Whether it is exclusive concurrency</p>
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置<p>Whether it is exclusive concurrency</p>
                     * @param _isExclusive <p>Whether it is exclusive concurrency</p>
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取<p>Whether direct experience in the intelligent workbench is supported (model plaza details page: dynamically determined based on space_id; when false, the frontend disables the "experience now" button)</p>
                     * @return IsExperienceSupported <p>Whether direct experience in the intelligent workbench is supported (model plaza details page: dynamically determined based on space_id; when false, the frontend disables the "experience now" button)</p>
                     * 
                     */
                    bool GetIsExperienceSupported() const;

                    /**
                     * 设置<p>Whether direct experience in the intelligent workbench is supported (model plaza details page: dynamically determined based on space_id; when false, the frontend disables the "experience now" button)</p>
                     * @param _isExperienceSupported <p>Whether direct experience in the intelligent workbench is supported (model plaza details page: dynamically determined based on space_id; when false, the frontend disables the "experience now" button)</p>
                     * 
                     */
                    void SetIsExperienceSupported(const bool& _isExperienceSupported);

                    /**
                     * 判断参数 IsExperienceSupported 是否已赋值
                     * @return IsExperienceSupported 是否已赋值
                     * 
                     */
                    bool IsExperienceSupportedHasBeenSet() const;

                    /**
                     * 获取<p>Resource status</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>Not specified</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>Resource available</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>Resource exhausted</td></tr></table>
                     * @return ResourceStatus <p>Resource status</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>Not specified</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>Resource available</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>Resource exhausted</td></tr></table>
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置<p>Resource status</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>Not specified</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>Resource available</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>Resource exhausted</td></tr></table>
                     * @param _resourceStatus <p>Resource status</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>Not specified</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>Resource available</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>Resource exhausted</td></tr></table>
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取<p>RPM call cap (current account dimension: use the configured value if available; otherwise, take default. 0 means not obtained)</p>
                     * @return RpmLimit <p>RPM call cap (current account dimension: use the configured value if available; otherwise, take default. 0 means not obtained)</p>
                     * 
                     */
                    std::string GetRpmLimit() const;

                    /**
                     * 设置<p>RPM call cap (current account dimension: use the configured value if available; otherwise, take default. 0 means not obtained)</p>
                     * @param _rpmLimit <p>RPM call cap (current account dimension: use the configured value if available; otherwise, take default. 0 means not obtained)</p>
                     * 
                     */
                    void SetRpmLimit(const std::string& _rpmLimit);

                    /**
                     * 判断参数 RpmLimit 是否已赋值
                     * @return RpmLimit 是否已赋值
                     * 
                     */
                    bool RpmLimitHasBeenSet() const;

                    /**
                     * 获取<p>TPM call upper limit (at the current account level: use the configured value if available; otherwise, take default. 0 means failed to obtain)</p>
                     * @return TpmLimit <p>TPM call upper limit (at the current account level: use the configured value if available; otherwise, take default. 0 means failed to obtain)</p>
                     * 
                     */
                    std::string GetTpmLimit() const;

                    /**
                     * 设置<p>TPM call upper limit (at the current account level: use the configured value if available; otherwise, take default. 0 means failed to obtain)</p>
                     * @param _tpmLimit <p>TPM call upper limit (at the current account level: use the configured value if available; otherwise, take default. 0 means failed to obtain)</p>
                     * 
                     */
                    void SetTpmLimit(const std::string& _tpmLimit);

                    /**
                     * 判断参数 TpmLimit 是否已赋值
                     * @return TpmLimit 是否已赋值
                     * 
                     */
                    bool TpmLimitHasBeenSet() const;

                private:

                    /**
                     * <p>Number of exclusive concurrencies</p>
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * <p>Whether it is exclusive concurrency</p>
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * <p>Whether direct experience in the intelligent workbench is supported (model plaza details page: dynamically determined based on space_id; when false, the frontend disables the "experience now" button)</p>
                     */
                    bool m_isExperienceSupported;
                    bool m_isExperienceSupportedHasBeenSet;

                    /**
                     * <p>Resource status</p><table><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>Not specified</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>Resource available</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>Resource exhausted</td></tr></table>
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * <p>RPM call cap (current account dimension: use the configured value if available; otherwise, take default. 0 means not obtained)</p>
                     */
                    std::string m_rpmLimit;
                    bool m_rpmLimitHasBeenSet;

                    /**
                     * <p>TPM call upper limit (at the current account level: use the configured value if available; otherwise, take default. 0 means failed to obtain)</p>
                     */
                    std::string m_tpmLimit;
                    bool m_tpmLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_
