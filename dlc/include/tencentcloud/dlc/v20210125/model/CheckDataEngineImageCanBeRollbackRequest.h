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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKREQUEST_H_

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
                * CheckDataEngineImageCanBeRollback request structure.
                */
                class CheckDataEngineImageCanBeRollbackRequest : public AbstractModel
                {
                public:
                    CheckDataEngineImageCanBeRollbackRequest();
                    ~CheckDataEngineImageCanBeRollbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique engine ID
                     * @return DataEngineId Unique engine ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置Unique engine ID
                     * @param _dataEngineId Unique engine ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                private:

                    /**
                     * Unique engine ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINEIMAGECANBEROLLBACKREQUEST_H_
