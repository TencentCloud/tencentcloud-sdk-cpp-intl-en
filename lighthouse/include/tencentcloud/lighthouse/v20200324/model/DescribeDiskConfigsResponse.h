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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKCONFIGSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskConfig.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskConfigs response structure.
                */
                class DescribeDiskConfigsResponse : public AbstractModel
                {
                public:
                    DescribeDiskConfigsResponse();
                    ~DescribeDiskConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk configurations.
                     * @return DiskConfigSet List of cloud disk configurations.
                     */
                    std::vector<DiskConfig> GetDiskConfigSet() const;

                    /**
                     * 判断参数 DiskConfigSet 是否已赋值
                     * @return DiskConfigSet 是否已赋值
                     */
                    bool DiskConfigSetHasBeenSet() const;

                private:

                    /**
                     * List of cloud disk configurations.
                     */
                    std::vector<DiskConfig> m_diskConfigSet;
                    bool m_diskConfigSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKCONFIGSRESPONSE_H_
