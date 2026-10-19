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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSAKASSETREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSAKASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosAkSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteCosAkAsset request structure.
                */
                class DeleteCosAkAssetRequest : public AbstractModel
                {
                public:
                    DeleteCosAkAssetRequest();
                    ~DeleteCosAkAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of cos AKs to delete
                     * @return CosAkSet Collection of cos AKs to delete
                     * 
                     */
                    std::vector<CosAkSet> GetCosAkSet() const;

                    /**
                     * 设置Collection of cos AKs to delete
                     * @param _cosAkSet Collection of cos AKs to delete
                     * 
                     */
                    void SetCosAkSet(const std::vector<CosAkSet>& _cosAkSet);

                    /**
                     * 判断参数 CosAkSet 是否已赋值
                     * @return CosAkSet 是否已赋值
                     * 
                     */
                    bool CosAkSetHasBeenSet() const;

                private:

                    /**
                     * Collection of cos AKs to delete
                     */
                    std::vector<CosAkSet> m_cosAkSet;
                    bool m_cosAkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECOSAKASSETREQUEST_H_
