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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListReceivers request structure.
                */
                class ListReceiversRequest : public AbstractModel
                {
                public:
                    ListReceiversRequest();
                    ~ListReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, starting from 0. The value is an integer.
                     * @return Offset Offset, starting from 0. The value is an integer.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, starting from 0. The value is an integer.
                     * @param _offset Offset, starting from 0. The value is an integer.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of records to query. The value is an integer not exceeding 100.
                     * @return Limit Number of records to query. The value is an integer not exceeding 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records to query. The value is an integer not exceeding 100.
                     * @param _limit Number of records to query. The value is an integer not exceeding 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Group status (`1`: to be uploaded; `2` uploading; `3` uploaded). To query groups in all states, do not pass in this parameter.
                     * @return Status Group status (`1`: to be uploaded; `2` uploading; `3` uploaded). To query groups in all states, do not pass in this parameter.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Group status (`1`: to be uploaded; `2` uploading; `3` uploaded). To query groups in all states, do not pass in this parameter.
                     * @param _status Group status (`1`: to be uploaded; `2` uploading; `3` uploaded). To query groups in all states, do not pass in this parameter.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Group name keyword for fuzzy query
                     * @return KeyWord Group name keyword for fuzzy query
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置Group name keyword for fuzzy query
                     * @param _keyWord Group name keyword for fuzzy query
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * Offset, starting from 0. The value is an integer.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records to query. The value is an integer not exceeding 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Group status (`1`: to be uploaded; `2` uploading; `3` uploaded). To query groups in all states, do not pass in this parameter.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Group name keyword for fuzzy query
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_
