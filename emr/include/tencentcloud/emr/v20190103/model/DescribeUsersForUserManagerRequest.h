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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeUsersForUserManager request structure.
                */
                class DescribeUsersForUserManagerRequest : public AbstractModel
                {
                public:
                    DescribeUsersForUserManagerRequest();
                    ~DescribeUsersForUserManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * @return NeedKeytabInfo Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     */
                    bool GetNeedKeytabInfo() const;

                    /**
                     * 设置Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * @param NeedKeytabInfo Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     */
                    void SetNeedKeytabInfo(const bool& _needKeytabInfo);

                    /**
                     * 判断参数 NeedKeytabInfo 是否已赋值
                     * @return NeedKeytabInfo 是否已赋值
                     */
                    bool NeedKeytabInfoHasBeenSet() const;

                private:

                    /**
                     * Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     */
                    bool m_needKeytabInfo;
                    bool m_needKeytabInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
