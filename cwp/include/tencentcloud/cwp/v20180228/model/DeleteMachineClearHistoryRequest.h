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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINECLEARHISTORYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINECLEARHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteMachineClearHistory request structure.
                */
                class DeleteMachineClearHistoryRequest : public AbstractModel
                {
                public:
                    DeleteMachineClearHistoryRequest();
                    ~DeleteMachineClearHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of records to be deleted, up to 100 characters in length
                     * @return Ids IDs of records to be deleted, up to 100 characters in length
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置IDs of records to be deleted, up to 100 characters in length
                     * @param _ids IDs of records to be deleted, up to 100 characters in length
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
                     * IDs of records to be deleted, up to 100 characters in length
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEMACHINECLEARHISTORYREQUEST_H_
