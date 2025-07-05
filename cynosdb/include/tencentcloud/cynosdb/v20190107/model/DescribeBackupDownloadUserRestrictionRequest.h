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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBackupDownloadUserRestriction request structure.
                */
                class DescribeBackupDownloadUserRestrictionRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadUserRestrictionRequest();
                    ~DescribeBackupDownloadUserRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination size
                     * @return Limit Pagination size
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination size
                     * @param _limit Pagination size
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Specifies whether to query only user-level download limits. true - yes, false - no.
                     * @return OnlyUserRestriction Specifies whether to query only user-level download limits. true - yes, false - no.
                     * 
                     */
                    bool GetOnlyUserRestriction() const;

                    /**
                     * 设置Specifies whether to query only user-level download limits. true - yes, false - no.
                     * @param _onlyUserRestriction Specifies whether to query only user-level download limits. true - yes, false - no.
                     * 
                     */
                    void SetOnlyUserRestriction(const bool& _onlyUserRestriction);

                    /**
                     * 判断参数 OnlyUserRestriction 是否已赋值
                     * @return OnlyUserRestriction 是否已赋值
                     * 
                     */
                    bool OnlyUserRestrictionHasBeenSet() const;

                private:

                    /**
                     * Pagination size
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies whether to query only user-level download limits. true - yes, false - no.
                     */
                    bool m_onlyUserRestriction;
                    bool m_onlyUserRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADUSERRESTRICTIONREQUEST_H_
