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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETELOGINWHITELISTREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETELOGINWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteLoginWhiteList request structure.
                */
                class DeleteLoginWhiteListRequest : public AbstractModel
                {
                public:
                    DeleteLoginWhiteListRequest();
                    ~DeleteLoginWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whitelist ID
                     * @return Ids Whitelist ID
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置Whitelist ID
                     * @param _ids Whitelist ID
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Whitelist ID
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DELETELOGINWHITELISTREQUEST_H_
