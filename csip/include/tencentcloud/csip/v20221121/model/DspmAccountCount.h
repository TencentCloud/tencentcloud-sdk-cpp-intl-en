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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_

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
                * Dspm account statistics
                */
                class DspmAccountCount : public AbstractModel
                {
                public:
                    DspmAccountCount();
                    ~DspmAccountCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of cloud accounts
                     * @return UinAccountCount Number of cloud accounts
                     * 
                     */
                    int64_t GetUinAccountCount() const;

                    /**
                     * 设置Number of cloud accounts
                     * @param _uinAccountCount Number of cloud accounts
                     * 
                     */
                    void SetUinAccountCount(const int64_t& _uinAccountCount);

                    /**
                     * 判断参数 UinAccountCount 是否已赋值
                     * @return UinAccountCount 是否已赋值
                     * 
                     */
                    bool UinAccountCountHasBeenSet() const;

                    /**
                     * 获取Guest account count
                     * @return PersonCount Guest account count
                     * 
                     */
                    int64_t GetPersonCount() const;

                    /**
                     * 设置Guest account count
                     * @param _personCount Guest account count
                     * 
                     */
                    void SetPersonCount(const int64_t& _personCount);

                    /**
                     * 判断参数 PersonCount 是否已赋值
                     * @return PersonCount 是否已赋值
                     * 
                     */
                    bool PersonCountHasBeenSet() const;

                    /**
                     * 获取Number of unmanaged accounts
                     * @return UncontrolledAccountCount Number of unmanaged accounts
                     * 
                     */
                    int64_t GetUncontrolledAccountCount() const;

                    /**
                     * 设置Number of unmanaged accounts
                     * @param _uncontrolledAccountCount Number of unmanaged accounts
                     * 
                     */
                    void SetUncontrolledAccountCount(const int64_t& _uncontrolledAccountCount);

                    /**
                     * 判断参数 UncontrolledAccountCount 是否已赋值
                     * @return UncontrolledAccountCount 是否已赋值
                     * 
                     */
                    bool UncontrolledAccountCountHasBeenSet() const;

                    /**
                     * 获取Total number of accounts
                     * @return TotalAccountCount Total number of accounts
                     * 
                     */
                    int64_t GetTotalAccountCount() const;

                    /**
                     * 设置Total number of accounts
                     * @param _totalAccountCount Total number of accounts
                     * 
                     */
                    void SetTotalAccountCount(const int64_t& _totalAccountCount);

                    /**
                     * 判断参数 TotalAccountCount 是否已赋值
                     * @return TotalAccountCount 是否已赋值
                     * 
                     */
                    bool TotalAccountCountHasBeenSet() const;

                private:

                    /**
                     * Number of cloud accounts
                     */
                    int64_t m_uinAccountCount;
                    bool m_uinAccountCountHasBeenSet;

                    /**
                     * Guest account count
                     */
                    int64_t m_personCount;
                    bool m_personCountHasBeenSet;

                    /**
                     * Number of unmanaged accounts
                     */
                    int64_t m_uncontrolledAccountCount;
                    bool m_uncontrolledAccountCountHasBeenSet;

                    /**
                     * Total number of accounts
                     */
                    int64_t m_totalAccountCount;
                    bool m_totalAccountCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCOUNTCOUNT_H_
