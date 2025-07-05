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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * BalanceRoGroupLoad request structure.
                */
                class BalanceRoGroupLoadRequest : public AbstractModel
                {
                public:
                    BalanceRoGroupLoadRequest();
                    ~BalanceRoGroupLoadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RO group ID in the format of `cdbrg-c1nl9rpv`.
                     * @return RoGroupId RO group ID in the format of `cdbrg-c1nl9rpv`.
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置RO group ID in the format of `cdbrg-c1nl9rpv`.
                     * @param _roGroupId RO group ID in the format of `cdbrg-c1nl9rpv`.
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                private:

                    /**
                     * RO group ID in the format of `cdbrg-c1nl9rpv`.
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BALANCEROGROUPLOADREQUEST_H_
