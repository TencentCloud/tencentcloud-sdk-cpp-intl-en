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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISDETAIL_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Detailed visit analysis data
                */
                class AccessAnalysisDetail : public AbstractModel
                {
                public:
                    AccessAnalysisDetail();
                    ~AccessAnalysisDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of active devices
                     * @return ActiveCount Number of active devices
                     * 
                     */
                    int64_t GetActiveCount() const;

                    /**
                     * 设置Number of active devices
                     * @param _activeCount Number of active devices
                     * 
                     */
                    void SetActiveCount(const int64_t& _activeCount);

                    /**
                     * 判断参数 ActiveCount 是否已赋值
                     * @return ActiveCount 是否已赋值
                     * 
                     */
                    bool ActiveCountHasBeenSet() const;

                    /**
                     * 获取Average visit duration per user
                     * @return AvgDevice Average visit duration per user
                     * 
                     */
                    std::string GetAvgDevice() const;

                    /**
                     * 设置Average visit duration per user
                     * @param _avgDevice Average visit duration per user
                     * 
                     */
                    void SetAvgDevice(const std::string& _avgDevice);

                    /**
                     * 判断参数 AvgDevice 是否已赋值
                     * @return AvgDevice 是否已赋值
                     * 
                     */
                    bool AvgDeviceHasBeenSet() const;

                    /**
                     * 获取Average visit duration per session
                     * @return AvgOnce Average visit duration per session
                     * 
                     */
                    std::string GetAvgOnce() const;

                    /**
                     * 设置Average visit duration per session
                     * @param _avgOnce Average visit duration per session
                     * 
                     */
                    void SetAvgOnce(const std::string& _avgOnce);

                    /**
                     * 判断参数 AvgOnce 是否已赋值
                     * @return AvgOnce 是否已赋值
                     * 
                     */
                    bool AvgOnceHasBeenSet() const;

                    /**
                     * 获取Average opens per user
                     * @return AvgOpenCount Average opens per user
                     * 
                     */
                    std::string GetAvgOpenCount() const;

                    /**
                     * 设置Average opens per user
                     * @param _avgOpenCount Average opens per user
                     * 
                     */
                    void SetAvgOpenCount(const std::string& _avgOpenCount);

                    /**
                     * 判断参数 AvgOpenCount 是否已赋值
                     * @return AvgOpenCount 是否已赋值
                     * 
                     */
                    bool AvgOpenCountHasBeenSet() const;

                    /**
                     * 获取Date
                     * @return DataTime Date
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Date
                     * @param _dataTime Date
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取Data time
                     * @return FlushTime Data time
                     * 
                     */
                    std::string GetFlushTime() const;

                    /**
                     * 设置Data time
                     * @param _flushTime Data time
                     * 
                     */
                    void SetFlushTime(const std::string& _flushTime);

                    /**
                     * 判断参数 FlushTime 是否已赋值
                     * @return FlushTime 是否已赋值
                     * 
                     */
                    bool FlushTimeHasBeenSet() const;

                    /**
                     * 获取Number of new devices
                     * @return NewCount Number of new devices
                     * 
                     */
                    int64_t GetNewCount() const;

                    /**
                     * 设置Number of new devices
                     * @param _newCount Number of new devices
                     * 
                     */
                    void SetNewCount(const int64_t& _newCount);

                    /**
                     * 判断参数 NewCount 是否已赋值
                     * @return NewCount 是否已赋值
                     * 
                     */
                    bool NewCountHasBeenSet() const;

                    /**
                     * 获取Number of opens
                     * @return OpenCount Number of opens
                     * 
                     */
                    int64_t GetOpenCount() const;

                    /**
                     * 设置Number of opens
                     * @param _openCount Number of opens
                     * 
                     */
                    void SetOpenCount(const int64_t& _openCount);

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取Number of shares
                     * @return TotalShareNum Number of shares
                     * 
                     */
                    int64_t GetTotalShareNum() const;

                    /**
                     * 设置Number of shares
                     * @param _totalShareNum Number of shares
                     * 
                     */
                    void SetTotalShareNum(const int64_t& _totalShareNum);

                    /**
                     * 判断参数 TotalShareNum 是否已赋值
                     * @return TotalShareNum 是否已赋值
                     * 
                     */
                    bool TotalShareNumHasBeenSet() const;

                    /**
                     * 获取Cumulative users
                     * @return TotalUserNum Cumulative users
                     * 
                     */
                    int64_t GetTotalUserNum() const;

                    /**
                     * 设置Cumulative users
                     * @param _totalUserNum Cumulative users
                     * 
                     */
                    void SetTotalUserNum(const int64_t& _totalUserNum);

                    /**
                     * 判断参数 TotalUserNum 是否已赋值
                     * @return TotalUserNum 是否已赋值
                     * 
                     */
                    bool TotalUserNumHasBeenSet() const;

                private:

                    /**
                     * Number of active devices
                     */
                    int64_t m_activeCount;
                    bool m_activeCountHasBeenSet;

                    /**
                     * Average visit duration per user
                     */
                    std::string m_avgDevice;
                    bool m_avgDeviceHasBeenSet;

                    /**
                     * Average visit duration per session
                     */
                    std::string m_avgOnce;
                    bool m_avgOnceHasBeenSet;

                    /**
                     * Average opens per user
                     */
                    std::string m_avgOpenCount;
                    bool m_avgOpenCountHasBeenSet;

                    /**
                     * Date
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * Data time
                     */
                    std::string m_flushTime;
                    bool m_flushTimeHasBeenSet;

                    /**
                     * Number of new devices
                     */
                    int64_t m_newCount;
                    bool m_newCountHasBeenSet;

                    /**
                     * Number of opens
                     */
                    int64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * Number of shares
                     */
                    int64_t m_totalShareNum;
                    bool m_totalShareNumHasBeenSet;

                    /**
                     * Cumulative users
                     */
                    int64_t m_totalUserNum;
                    bool m_totalUserNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_ACCESSANALYSISDETAIL_H_
