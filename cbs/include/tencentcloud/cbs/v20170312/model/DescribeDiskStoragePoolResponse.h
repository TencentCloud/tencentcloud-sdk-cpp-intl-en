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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Cdc.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskStoragePool response structure.
                */
                class DescribeDiskStoragePoolResponse : public AbstractModel
                {
                public:
                    DescribeDiskStoragePoolResponse();
                    ~DescribeDiskStoragePoolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取the number of eligible dedicated clusters.
                     * @return TotalCount the number of eligible dedicated clusters.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Details of the dedicated cluster.
                     * @return CdcSet Details of the dedicated cluster.
                     * 
                     */
                    std::vector<Cdc> GetCdcSet() const;

                    /**
                     * 判断参数 CdcSet 是否已赋值
                     * @return CdcSet 是否已赋值
                     * 
                     */
                    bool CdcSetHasBeenSet() const;

                    /**
                     * 获取Exclusive cluster details list.
                     * @return DiskStoragePoolSet Exclusive cluster details list.
                     * 
                     */
                    std::vector<Cdc> GetDiskStoragePoolSet() const;

                    /**
                     * 判断参数 DiskStoragePoolSet 是否已赋值
                     * @return DiskStoragePoolSet 是否已赋值
                     * 
                     */
                    bool DiskStoragePoolSetHasBeenSet() const;

                private:

                    /**
                     * the number of eligible dedicated clusters.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Details of the dedicated cluster.
                     */
                    std::vector<Cdc> m_cdcSet;
                    bool m_cdcSetHasBeenSet;

                    /**
                     * Exclusive cluster details list.
                     */
                    std::vector<Cdc> m_diskStoragePoolSet;
                    bool m_diskStoragePoolSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLRESPONSE_H_
