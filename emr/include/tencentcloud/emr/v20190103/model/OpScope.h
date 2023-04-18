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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OPSCOPE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OPSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ServiceBasicRestartInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Operation scope
                */
                class OpScope : public AbstractModel
                {
                public:
                    OpScope();
                    ~OpScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The information of the services to operate on.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceInfoList The information of the services to operate on.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceBasicRestartInfo> GetServiceInfoList() const;

                    /**
                     * 设置The information of the services to operate on.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ServiceInfoList The information of the services to operate on.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceInfoList(const std::vector<ServiceBasicRestartInfo>& _serviceInfoList);

                    /**
                     * 判断参数 ServiceInfoList 是否已赋值
                     * @return ServiceInfoList 是否已赋值
                     */
                    bool ServiceInfoListHasBeenSet() const;

                private:

                    /**
                     * The information of the services to operate on.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceBasicRestartInfo> m_serviceInfoList;
                    bool m_serviceInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OPSCOPE_H_
