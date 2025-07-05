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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetPolicyList request structure.
                */
                class GetPolicyListRequest : public AbstractModel
                {
                public:
                    GetPolicyListRequest();
                    ~GetPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start.
                     * @return DisplayStart The start.
                     * 
                     */
                    int64_t GetDisplayStart() const;

                    /**
                     * 设置The start.
                     * @param _displayStart The start.
                     * 
                     */
                    void SetDisplayStart(const int64_t& _displayStart);

                    /**
                     * 判断参数 DisplayStart 是否已赋值
                     * @return DisplayStart 是否已赋值
                     * 
                     */
                    bool DisplayStartHasBeenSet() const;

                    /**
                     * 获取The maximum number of records to return.
                     * @return DisplayLength The maximum number of records to return.
                     * 
                     */
                    int64_t GetDisplayLength() const;

                    /**
                     * 设置The maximum number of records to return.
                     * @param _displayLength The maximum number of records to return.
                     * 
                     */
                    void SetDisplayLength(const int64_t& _displayLength);

                    /**
                     * 判断参数 DisplayLength 是否已赋值
                     * @return DisplayLength 是否已赋值
                     * 
                     */
                    bool DisplayLengthHasBeenSet() const;

                private:

                    /**
                     * The start.
                     */
                    int64_t m_displayStart;
                    bool m_displayStartHasBeenSet;

                    /**
                     * The maximum number of records to return.
                     */
                    int64_t m_displayLength;
                    bool m_displayLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_
