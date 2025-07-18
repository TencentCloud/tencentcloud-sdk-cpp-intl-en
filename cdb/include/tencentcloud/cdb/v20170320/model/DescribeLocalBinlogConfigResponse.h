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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBELOCALBINLOGCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBELOCALBINLOGCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/LocalBinlogConfig.h>
#include <tencentcloud/cdb/v20170320/model/LocalBinlogConfigDefault.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeLocalBinlogConfig response structure.
                */
                class DescribeLocalBinlogConfigResponse : public AbstractModel
                {
                public:
                    DescribeLocalBinlogConfigResponse();
                    ~DescribeLocalBinlogConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Binlog retention policy of the instance.
                     * @return LocalBinlogConfig Binlog retention policy of the instance.
                     * 
                     */
                    LocalBinlogConfig GetLocalBinlogConfig() const;

                    /**
                     * 判断参数 LocalBinlogConfig 是否已赋值
                     * @return LocalBinlogConfig 是否已赋值
                     * 
                     */
                    bool LocalBinlogConfigHasBeenSet() const;

                    /**
                     * 获取Default binlog retention policy in the region.
                     * @return LocalBinlogConfigDefault Default binlog retention policy in the region.
                     * 
                     */
                    LocalBinlogConfigDefault GetLocalBinlogConfigDefault() const;

                    /**
                     * 判断参数 LocalBinlogConfigDefault 是否已赋值
                     * @return LocalBinlogConfigDefault 是否已赋值
                     * 
                     */
                    bool LocalBinlogConfigDefaultHasBeenSet() const;

                private:

                    /**
                     * Binlog retention policy of the instance.
                     */
                    LocalBinlogConfig m_localBinlogConfig;
                    bool m_localBinlogConfigHasBeenSet;

                    /**
                     * Default binlog retention policy in the region.
                     */
                    LocalBinlogConfigDefault m_localBinlogConfigDefault;
                    bool m_localBinlogConfigDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBELOCALBINLOGCONFIGRESPONSE_H_
