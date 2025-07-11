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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DLCCatalogAccess.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDLCCatalogAccess response structure.
                */
                class DescribeDLCCatalogAccessResponse : public AbstractModel
                {
                public:
                    DescribeDLCCatalogAccessResponse();
                    ~DescribeDLCCatalogAccessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total
                     * @return TotalCount Total
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
                     * 获取List of the permissions granted by DLCCatalog
                     * @return Rows List of the permissions granted by DLCCatalog
                     * 
                     */
                    std::vector<DLCCatalogAccess> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                private:

                    /**
                     * Total
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of the permissions granted by DLCCatalog
                     */
                    std::vector<DLCCatalogAccess> m_rows;
                    bool m_rowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSRESPONSE_H_
