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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * Claim protocol type (CPT) rankings by the number of credentials issued.
                */
                class CptIssueRank : public AbstractModel
                {
                public:
                    CptIssueRank();
                    ~CptIssueRank() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The (claim protocol type) CPT name.
                     * @return CptName The (claim protocol type) CPT name.
                     * 
                     */
                    std::string GetCptName() const;

                    /**
                     * 设置The (claim protocol type) CPT name.
                     * @param _cptName The (claim protocol type) CPT name.
                     * 
                     */
                    void SetCptName(const std::string& _cptName);

                    /**
                     * 判断参数 CptName 是否已赋值
                     * @return CptName 是否已赋值
                     * 
                     */
                    bool CptNameHasBeenSet() const;

                    /**
                     * 获取The ranking.
                     * @return Rank The ranking.
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置The ranking.
                     * @param _rank The ranking.
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取The number of credentials issued.
                     * @return Count The number of credentials issued.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of credentials issued.
                     * @param _count The number of credentials issued.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取The application name.
                     * @return ApplyName The application name.
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置The application name.
                     * @param _applyName The application name.
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取The application ID.
                     * @return ApplyId The application ID.
                     * 
                     */
                    uint64_t GetApplyId() const;

                    /**
                     * 设置The application ID.
                     * @param _applyId The application ID.
                     * 
                     */
                    void SetApplyId(const uint64_t& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                private:

                    /**
                     * The (claim protocol type) CPT name.
                     */
                    std::string m_cptName;
                    bool m_cptNameHasBeenSet;

                    /**
                     * The ranking.
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * The number of credentials issued.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * The application ID.
                     */
                    uint64_t m_applyId;
                    bool m_applyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_
