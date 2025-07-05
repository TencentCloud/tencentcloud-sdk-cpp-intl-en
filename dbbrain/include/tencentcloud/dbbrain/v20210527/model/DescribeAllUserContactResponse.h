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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ContactItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAllUserContact response structure.
                */
                class DescribeAllUserContactResponse : public AbstractModel
                {
                public:
                    DescribeAllUserContactResponse();
                    ~DescribeAllUserContactResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of recipients.
                     * @return TotalCount Total number of recipients.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Recipient information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Contacts Recipient information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ContactItem> GetContacts() const;

                    /**
                     * 判断参数 Contacts 是否已赋值
                     * @return Contacts 是否已赋值
                     * 
                     */
                    bool ContactsHasBeenSet() const;

                private:

                    /**
                     * Total number of recipients.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Recipient information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ContactItem> m_contacts;
                    bool m_contactsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEALLUSERCONTACTRESPONSE_H_
