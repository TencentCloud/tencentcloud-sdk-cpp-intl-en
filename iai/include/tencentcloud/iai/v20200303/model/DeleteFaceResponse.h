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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACERESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DeleteFace response structure.
                */
                class DeleteFaceResponse : public AbstractModel
                {
                public:
                    DeleteFaceResponse();
                    ~DeleteFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Number of successfully deleted faces
                     * @return SucDeletedNum Number of successfully deleted faces
                     */
                    uint64_t GetSucDeletedNum() const;

                    /**
                     * 判断参数 SucDeletedNum 是否已赋值
                     * @return SucDeletedNum 是否已赋值
                     */
                    bool SucDeletedNumHasBeenSet() const;

                    /**
                     * 获取List of IDs of successfully deleted faces
                     * @return SucFaceIds List of IDs of successfully deleted faces
                     */
                    std::vector<std::string> GetSucFaceIds() const;

                    /**
                     * 判断参数 SucFaceIds 是否已赋值
                     * @return SucFaceIds 是否已赋值
                     */
                    bool SucFaceIdsHasBeenSet() const;

                private:

                    /**
                     * Number of successfully deleted faces
                     */
                    uint64_t m_sucDeletedNum;
                    bool m_sucDeletedNumHasBeenSet;

                    /**
                     * List of IDs of successfully deleted faces
                     */
                    std::vector<std::string> m_sucFaceIds;
                    bool m_sucFaceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACERESPONSE_H_
