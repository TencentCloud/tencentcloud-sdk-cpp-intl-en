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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZoneConfigImportResult response structure.
                */
                class DescribeZoneConfigImportResultResponse : public AbstractModel
                {
                public:
                    DescribeZoneConfigImportResultResponse();
                    ~DescribeZoneConfigImportResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The status of this import task. Valid values: <li>success: It indicates the configuration was successfully imported;</li> <li>failure: It indicates the configuration import failed;</li> <li>doing: It indicates the configuration is being imported.</li>
                     * @return Status The status of this import task. Valid values: <li>success: It indicates the configuration was successfully imported;</li> <li>failure: It indicates the configuration import failed;</li> <li>doing: It indicates the configuration is being imported.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The status message of this import task. If the configuration item import fails, you can view the failure cause through this field.
                     * @return Message The status message of this import task. If the configuration item import fails, you can view the failure cause through this field.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The configuration content of this import task.
                     * @return Content The configuration content of this import task.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The start time of this import task.
                     * @return ImportTime The start time of this import task.
                     * 
                     */
                    std::string GetImportTime() const;

                    /**
                     * 判断参数 ImportTime 是否已赋值
                     * @return ImportTime 是否已赋值
                     * 
                     */
                    bool ImportTimeHasBeenSet() const;

                    /**
                     * 获取The end time of this import task.
                     * @return FinishTime The end time of this import task.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * The status of this import task. Valid values: <li>success: It indicates the configuration was successfully imported;</li> <li>failure: It indicates the configuration import failed;</li> <li>doing: It indicates the configuration is being imported.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The status message of this import task. If the configuration item import fails, you can view the failure cause through this field.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The configuration content of this import task.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The start time of this import task.
                     */
                    std::string m_importTime;
                    bool m_importTimeHasBeenSet;

                    /**
                     * The end time of this import task.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECONFIGIMPORTRESULTRESPONSE_H_
