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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DeleteDBSBackupSets response structure.
                */
                class DeleteDBSBackupSetsResponse : public AbstractModel
                {
                public:
                    DeleteDBSBackupSetsResponse();
                    ~DeleteDBSBackupSetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<P>Number of backups deleted this time.</p>
                     * @return Deleted <P>Number of backups deleted this time.</p>
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取<P>Whether all are deleted successfully.</p>
                     * @return IsSuccess <P>Whether all are deleted successfully.</p>
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                    /**
                     * 获取<P>Total number of backups to be deleted.</p>
                     * @return Total <P>Total number of backups to be deleted.</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <P>Number of backups deleted this time.</p>
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * <P>Whether all are deleted successfully.</p>
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                    /**
                     * <P>Total number of backups to be deleted.</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DELETEDBSBACKUPSETSRESPONSE_H_
