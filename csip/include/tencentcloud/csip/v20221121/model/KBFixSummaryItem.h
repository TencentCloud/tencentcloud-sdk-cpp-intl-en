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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_

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
                * Summary of KB patch repair
                */
                class KBFixSummaryItem : public AbstractModel
                {
                public:
                    KBFixSummaryItem();
                    ~KBFixSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KB patch ID
                     * @return KBId KB patch ID
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置KB patch ID
                     * @param _kBId KB patch ID
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取KB patch name
                     * @return KBName KB patch name
                     * 
                     */
                    std::string GetKBName() const;

                    /**
                     * 设置KB patch name
                     * @param _kBName KB patch name
                     * 
                     */
                    void SetKBName(const std::string& _kBName);

                    /**
                     * 判断参数 KBName 是否已赋值
                     * @return KBName 是否已赋值
                     * 
                     */
                    bool KBNameHasBeenSet() const;

                    /**
                     * 获取KB No. (for example, KB5001234)
                     * @return KBNo KB No. (for example, KB5001234)
                     * 
                     */
                    std::string GetKBNo() const;

                    /**
                     * 设置KB No. (for example, KB5001234)
                     * @param _kBNo KB No. (for example, KB5001234)
                     * 
                     */
                    void SetKBNo(const std::string& _kBNo);

                    /**
                     * 判断参数 KBNo 是否已赋值
                     * @return KBNo 是否已赋值
                     * 
                     */
                    bool KBNoHasBeenSet() const;

                    /**
                     * 获取Number of related vulnerabilities
                     * @return RelatedVulCount Number of related vulnerabilities
                     * 
                     */
                    int64_t GetRelatedVulCount() const;

                    /**
                     * 设置Number of related vulnerabilities
                     * @param _relatedVulCount Number of related vulnerabilities
                     * 
                     */
                    void SetRelatedVulCount(const int64_t& _relatedVulCount);

                    /**
                     * 判断参数 RelatedVulCount 是否已赋值
                     * @return RelatedVulCount 是否已赋值
                     * 
                     */
                    bool RelatedVulCountHasBeenSet() const;

                    /**
                     * 获取Number of affected hosts
                     * @return AffectedCount Number of affected hosts
                     * 
                     */
                    int64_t GetAffectedCount() const;

                    /**
                     * 设置Number of affected hosts
                     * @param _affectedCount Number of affected hosts
                     * 
                     */
                    void SetAffectedCount(const int64_t& _affectedCount);

                    /**
                     * 判断参数 AffectedCount 是否已赋值
                     * @return AffectedCount 是否已赋值
                     * 
                     */
                    bool AffectedCountHasBeenSet() const;

                    /**
                     * 获取Whether a system restart is required after the repair
                     * @return NeedReboot Whether a system restart is required after the repair
                     * 
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置Whether a system restart is required after the repair
                     * @param _needReboot Whether a system restart is required after the repair
                     * 
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Prerequisite dependency patches (comma-separated list of KB numbers)
                     * @return KBPreCondition Prerequisite dependency patches (comma-separated list of KB numbers)
                     * 
                     */
                    std::string GetKBPreCondition() const;

                    /**
                     * 设置Prerequisite dependency patches (comma-separated list of KB numbers)
                     * @param _kBPreCondition Prerequisite dependency patches (comma-separated list of KB numbers)
                     * 
                     */
                    void SetKBPreCondition(const std::string& _kBPreCondition);

                    /**
                     * 判断参数 KBPreCondition 是否已赋值
                     * @return KBPreCondition 是否已赋值
                     * 
                     */
                    bool KBPreConditionHasBeenSet() const;

                private:

                    /**
                     * KB patch ID
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * KB patch name
                     */
                    std::string m_kBName;
                    bool m_kBNameHasBeenSet;

                    /**
                     * KB No. (for example, KB5001234)
                     */
                    std::string m_kBNo;
                    bool m_kBNoHasBeenSet;

                    /**
                     * Number of related vulnerabilities
                     */
                    int64_t m_relatedVulCount;
                    bool m_relatedVulCountHasBeenSet;

                    /**
                     * Number of affected hosts
                     */
                    int64_t m_affectedCount;
                    bool m_affectedCountHasBeenSet;

                    /**
                     * Whether a system restart is required after the repair
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Prerequisite dependency patches (comma-separated list of KB numbers)
                     */
                    std::string m_kBPreCondition;
                    bool m_kBPreConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBFIXSUMMARYITEM_H_
