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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Creates a data backfill plan result.
                */
                class CreateDataReplenishmentPlan : public AbstractModel
                {
                public:
                    CreateDataReplenishmentPlan();
                    ~CreateDataReplenishmentPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the backfill plan Id.
                     * @return DataBackfillPlanId Specifies the backfill plan Id.
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置Specifies the backfill plan Id.
                     * @param _dataBackfillPlanId Specifies the backfill plan Id.
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the backfill plan Id.
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_
