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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/FileSystemClient.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsFileSystemClients response structure.
                */
                class DescribeCfsFileSystemClientsResponse : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemClientsResponse();
                    ~DescribeCfsFileSystemClientsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Client list
                     * @return ClientList Client list
                     * 
                     */
                    std::vector<FileSystemClient> GetClientList() const;

                    /**
                     * 判断参数 ClientList 是否已赋值
                     * @return ClientList 是否已赋值
                     * 
                     */
                    bool ClientListHasBeenSet() const;

                private:

                    /**
                     * Client list
                     */
                    std::vector<FileSystemClient> m_clientList;
                    bool m_clientListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_
