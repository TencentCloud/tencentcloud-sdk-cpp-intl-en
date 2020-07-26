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

#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrWordsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

AiRecognitionTaskAsrWordsResult::AiRecognitionTaskAsrWordsResult() :
    m_statusHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrWordsResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrWordsResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrWordsResult.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrWordsResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrWordsResult.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskAsrWordsResult.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrWordsResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiRecognitionTaskAsrWordsResult::GetStatus() const
{
    return m_status;
}

void AiRecognitionTaskAsrWordsResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AiRecognitionTaskAsrWordsResult::GetErrCode() const
{
    return m_errCode;
}

void AiRecognitionTaskAsrWordsResult::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResult::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AiRecognitionTaskAsrWordsResult::GetMessage() const
{
    return m_message;
}

void AiRecognitionTaskAsrWordsResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

AiRecognitionTaskAsrWordsResultInput AiRecognitionTaskAsrWordsResult::GetInput() const
{
    return m_input;
}

void AiRecognitionTaskAsrWordsResult::SetInput(const AiRecognitionTaskAsrWordsResultInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResult::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

AiRecognitionTaskAsrWordsResultOutput AiRecognitionTaskAsrWordsResult::GetOutput() const
{
    return m_output;
}

void AiRecognitionTaskAsrWordsResult::SetOutput(const AiRecognitionTaskAsrWordsResultOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool AiRecognitionTaskAsrWordsResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

