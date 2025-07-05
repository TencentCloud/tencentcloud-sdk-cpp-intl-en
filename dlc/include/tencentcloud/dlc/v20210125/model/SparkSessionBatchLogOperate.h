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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Operation information in the logs of a Spark SQL batch job
                */
                class SparkSessionBatchLogOperate : public AbstractModel
                {
                public:
                    SparkSessionBatchLogOperate();
                    ~SparkSessionBatchLogOperate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The operation message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text The operation message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The operation message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _text The operation message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The operation type. Valid values: `COPY`, `LOG`, `UI`, `RESULT`, `List`, and `TAB`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operate The operation type. Valid values: `COPY`, `LOG`, `UI`, `RESULT`, `List`, and `TAB`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置The operation type. Valid values: `COPY`, `LOG`, `UI`, `RESULT`, `List`, and `TAB`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operate The operation type. Valid values: `COPY`, `LOG`, `UI`, `RESULT`, `List`, and `TAB`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Additional information, such as taskid, sessionid, and sparkui.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Supplement Additional information, such as taskid, sessionid, and sparkui.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KVPair> GetSupplement() const;

                    /**
                     * 设置Additional information, such as taskid, sessionid, and sparkui.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supplement Additional information, such as taskid, sessionid, and sparkui.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupplement(const std::vector<KVPair>& _supplement);

                    /**
                     * 判断参数 Supplement 是否已赋值
                     * @return Supplement 是否已赋值
                     * 
                     */
                    bool SupplementHasBeenSet() const;

                private:

                    /**
                     * The operation message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The operation type. Valid values: `COPY`, `LOG`, `UI`, `RESULT`, `List`, and `TAB`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Additional information, such as taskid, sessionid, and sparkui.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KVPair> m_supplement;
                    bool m_supplementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_
