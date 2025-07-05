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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RollbackDataEngineImage request structure.
                */
                class RollbackDataEngineImageRequest : public AbstractModel
                {
                public:
                    RollbackDataEngineImageRequest();
                    ~RollbackDataEngineImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine ID
                     * @return DataEngineId Engine ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Engine ID
                     * @param _dataEngineId Engine ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取FromRecordId parameters returned by the API for checking the availability of rolling back
                     * @return FromRecordId FromRecordId parameters returned by the API for checking the availability of rolling back
                     * 
                     */
                    std::string GetFromRecordId() const;

                    /**
                     * 设置FromRecordId parameters returned by the API for checking the availability of rolling back
                     * @param _fromRecordId FromRecordId parameters returned by the API for checking the availability of rolling back
                     * 
                     */
                    void SetFromRecordId(const std::string& _fromRecordId);

                    /**
                     * 判断参数 FromRecordId 是否已赋值
                     * @return FromRecordId 是否已赋值
                     * 
                     */
                    bool FromRecordIdHasBeenSet() const;

                    /**
                     * 获取ToRecordId parameters returned by the API for checking the availability of rolling back
                     * @return ToRecordId ToRecordId parameters returned by the API for checking the availability of rolling back
                     * 
                     */
                    std::string GetToRecordId() const;

                    /**
                     * 设置ToRecordId parameters returned by the API for checking the availability of rolling back
                     * @param _toRecordId ToRecordId parameters returned by the API for checking the availability of rolling back
                     * 
                     */
                    void SetToRecordId(const std::string& _toRecordId);

                    /**
                     * 判断参数 ToRecordId 是否已赋值
                     * @return ToRecordId 是否已赋值
                     * 
                     */
                    bool ToRecordIdHasBeenSet() const;

                private:

                    /**
                     * Engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * FromRecordId parameters returned by the API for checking the availability of rolling back
                     */
                    std::string m_fromRecordId;
                    bool m_fromRecordIdHasBeenSet;

                    /**
                     * ToRecordId parameters returned by the API for checking the availability of rolling back
                     */
                    std::string m_toRecordId;
                    bool m_toRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_
